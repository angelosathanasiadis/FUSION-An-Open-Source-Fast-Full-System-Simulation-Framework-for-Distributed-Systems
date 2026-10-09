// ----------------------------------------------------------------------------
// COSSIM - Example of 4 simulated HLANodes using both Ethernet and Wireless networks.
// Copyright (c) 2018, H2020 COSSIM.
// Copyright (c) 2018, Telecommunications Systems Institute.
// 
// Author: Nikolaos Tampouratzis, ntampouratzis@isc.tuc.gr
// ----------------------------------------------------------------------------

package test.simulations;

import HLANode.SyncNode;
import HLANode.Txc0;
import HLANode.Txc1;


import inet.node.ethernet.EtherSwitch;
import ned.DatarateChannel;

import inet.node.inet.Router;
import inet.networklayer.configurator.ipv4.IPv4NetworkConfigurator;

import inet.node.aodv.AODVRouter;
import inet.networklayer.configurator.ipv4.IPv4NetworkConfigurator;
import inet.node.inet.INetworkNode;
import inet.networklayer.configurator.ipv4.IPv4NetworkConfigurator;
import inet.node.ethernet.Eth100M;
import inet.node.inet.Router;
import inet.node.inet.StandardHost;
import inet.node.inet.NodeBase;
import inet.node.inet.WirelessHost;
import inet.node.wireless.AccessPoint;
import inet.physicallayer.ieee80211.packetlevel.Ieee80211ScalarRadioMedium;





module CossimWirelessHostTower extends AODVRouter
{
    @display("i=device/antennatower");
    numRadios = default(1);
}


module CossimWirelessHostMobile extends AODVRouter
{
    @display("i=device/cellphone");
    numRadios = default(1);
}

 
network ARPTest
{
    types:


        channel ethline extends DatarateChannel
        {
            delay = 0ms;
            datarate = 1000Mbps;
        }
    submodules:




        switch1: EtherSwitch {
            @display("p=203,159");
        }

 
        configurator: IPv4NetworkConfigurator {
            //  assignDisjunctSubnetAddresses = true;
            config = xmldoc("config1.xml");

            @display("p=65,90");
        }


        node0: Txc0 {
            parameters:
                @display("i=device/server_l;p=382,58");
        }
        node1: Txc1 {
            parameters:
                @display("i=device/pc;p=439,276");
        }


        syncnode: SyncNode {
            parameters:
                @display("i=,red");
        }

    connections:
        syncnode.out --> {  delay = 0ms; } --> syncnode.in;

        node0.gate <--> ethline<--> switch1.ethg++;
        node1.gate <--> ethline <--> switch1.ethg++;


}

