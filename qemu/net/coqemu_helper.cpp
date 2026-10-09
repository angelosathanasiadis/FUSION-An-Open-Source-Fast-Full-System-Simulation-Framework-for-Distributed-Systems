#include "coqemu_helper_config.hh"

// declare a global pointer you can assign into
//static HLA_GEM5* NodeHLA = nullptr;

extern "C" void angelos_test(void)
{
    cout<<"\n\n\n\n Hello from cpp \n\n\n\n";

    string federate = "GEM5" ;

    int nodeNumber=1;
    int TotalNodes=2;

    //NodeHLA = new HLA_GEM5(federate,nodeNumber,TotalNodes);

}


extern "C" void step_hla(void)
{
    //cout<<"\n\n\n\n Hello from cpp \n\n\n\n";

    string federate = "GEM5" ;

    HLAGlobalSynch->step(); //! GLOBAL SYNCHRONIZATION !//

}


extern "C" int BufferPacketEmpty_hla(void)
{
    NodeHLA->step();
  if(NodeHLA->BufferPacketEmpty()){

    return 0;
  }
  else
  {
      return 1;
  }

}


extern "C"  int fill_the_packet(uint8_t **data, size_t *len) {

    //! **** Receive REAL Packet **** !//

    EthPacketPtr Rcvpacket = NodeHLA->getPacket();

    if(Rcvpacket->length > 0){ //! Receive Real Packet !//

       // data = Rcvpacket->data;
     *data = Rcvpacket->data;
    //memcpy(data, Rcvpacket->data, Rcvpacket->length);
    *len=Rcvpacket->length;



        //NodeHLA->clearRcvPacket();
        return 1;
    }
  else{ //! Receive Empty Packet -- Terminate the HLA Connection !//
        NodeHLA->clearRcvPacket();

        NodeHLA->resign();
        HLAGlobalSynch->resign();

        printf("GEM5 simulator node %d is stopped by OMNET++ corresponding Node before normal execution\n",nodeNumber);
        //change the function above to stop QEMU
        return 0;

  }

}


extern "C"  void clear_the_packet(void) {


    NodeHLA->clearRcvPacket();

}

extern "C" void init_HLA(int *_nodeNumber,int *_totalNodes)
{
    cout<<"\n\n\n\n Hello from init_HLA \n\n\n\n";

    nodeNumber=*_nodeNumber;
    TotalNodes=*_totalNodes;

    printf("This is node %d of %d\n", nodeNumber, TotalNodes);

    char str_name[100];

    /* 1. PROCESSING TO NETWORK HLA INITIALIZATION */
    sprintf(str_name,"COSSIM_PROC_NET_NODE%d",nodeNumber);
    string Sendfederation(str_name); /* PACKETS FROM PROCESSING TO NETWORK */
    printf("\n1. %s\n",Sendfederation.c_str());
    string federate = "GEM5" ;
    string fedfile = "Federation.fed";


    NodeHLA = new HLA_GEM5(federate,nodeNumber, TotalNodes);
    NodeHLA->HLASendInitialization(Sendfederation,fedfile, false, false);
    /* END PROCESSING TO NETWORK HLA INITIALIZATION */


    /* HLA GLOBAL SYNCRONIZATION */
    string Synchfederation = "GLOBAL_SYNCHRONIZATION" ;

    sprintf(str_name,"GEM5_NODE%d",nodeNumber);
    string Synchfederate(str_name);
    printf("\n2. %s\n",Synchfederate.c_str());

    HLAGlobalSynch = new HLA_GEM5(Synchfederate,nodeNumber, TotalNodes);
    HLAGlobalSynch->HLASendInitialization(Synchfederation,fedfile, true, true);
    /* END HLA GLOBAL SYNCRONIZATION */

    if(nodeNumber ==0){
      //! Remove HLA Initialization Data !//
      HLAInitializationRequest tmp;
      tmp.type = REMOVE;

      strcpy(tmp.name, "OmnetToGem5Signal");
      NodeHLA->RequestFunction(tmp);

      strcpy(tmp.name, "Gem5ToOmnetSignal");
      NodeHLA->RequestFunction(tmp);

      strcpy(tmp.name, "GlobalSynchSignal");
      NodeHLA->RequestFunction(tmp);

    }




}

extern "C"  void send_packet_hla(const uint8_t *data, size_t len) {
    NodeHLA->sendInteraction(const_cast<uint8_t*>(data),(uint32_t)len);
    NodeHLA->step();

}

extern "C"  void exit_function(void)
{
    //! Send Empty message to notify the GEM5 termination !//
    NodeHLA->sendInteraction(NULL,(uint32_t)0);
    NodeHLA->step();

    NodeHLA->resign();
    HLAGlobalSynch->resign();
}


extern "C"  void print_send_raw_packet(const uint8_t *data, size_t len) {
    /*
    printf("\n\n\n\n Hello from ANGELOS FUNCTIONS \n\n\n");

    printf("\n=== OUTGOING Packet (%zu bytes) ===\n", len);
    for (size_t i = 0; i < len; i++) {
        printf("%02X ", data[i]);
        if ((i + 1) % 16 == 0) printf("\n");
    }
    printf("\n=================================\n");
    */
}

extern "C"  void print_rcv_raw_packet(const uint8_t *data, size_t len) {
    /*
    printf("\n=== Received Packet (%zu bytes) ===\n", len);
    for (size_t i = 0; i < len; i++) {
        printf("%02X ", data[i]);
        if ((i + 1) % 16 == 0) printf("\n");
    }
    printf("\n=================================\n");
    */
}

