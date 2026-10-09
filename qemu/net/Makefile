# Makefile for building libcoqemu_helper.so from coqemu_helper.cpp and HLA_GEM5.cc
# Combines your plugin entrypoint and the HLA/GEM5 code into one shared library.

# The top-level source directory on which CMake was run.
CERTI_SOURCE_DIR = $(value CERTI_SOURCE_DIRECTORY)

# The top-level build directory on which CMake was run.
CERTI_BINARY_DIR = $(value CERTI_BINARY_DIRECTORY)

CXX := g++
CXXFLAGS := -std=c++11 -fPIC \
    -DHAVE_CONFIG_H=1 \
    -DHAVE_XML \
    -DHOST_IS_64BITS \
    -DRTI_USES_STD_FSTREAM \
    -I. \
    -I$(CERTI_SOURCE_DIR)/include \
    -I$(CERTI_SOURCE_DIR)/libCERTI \
    -I/usr/include/libxml2 \
    -I$(CERTI_BINARY_DIR)/include \
    -I$(CERTI_BINARY_DIR) \
    -I$(CERTI_SOURCE_DIR)/libHLA \
    -I$(CERTI_SOURCE_DIR)/include/hla-1_3 \
    -I$(CERTI_BINARY_DIR)/include/hla-1_3 \
    -I/lib/x86_64-linux-gnu

LDFLAGS := -shared -Wl,-rpath,$(CERTI_BINARY_DIR)/libRTI/hla-1_3:$(CERTI_BINARY_DIR)/libCERTI:$(CERTI_BINARY_DIR)/libHLA \
    -rdynamic

LDLIBS := \
    $(CERTI_BINARY_DIR)/libRTI/hla-1_3/libRTI-NGd.so.1.0.0 \
    $(CERTI_BINARY_DIR)/libCERTI/libCERTId.so.4.0.0 \
    -lxml2 \
    $(CERTI_BINARY_DIR)/libHLA/libHLAd.so.4.0.0 \
    -lrt \
    $(CERTI_BINARY_DIR)/libRTI/hla-1_3/libFedTimed.so.1.0.0 \
    -pthread \
    -ldl

SRCS := coqemu_helper.cpp HLA_GEM5.cc
OBJS := coqemu_helper.o HLA_GEM5.o
TARGET := libcoqemu_helper.so

.PHONY: all clean

all: $(TARGET)

coqemu_helper.o: coqemu_helper.cpp coqemu_helper.h HLA_GEM5.hh
	$(CXX) $(CXXFLAGS) -c coqemu_helper.cpp -o coqemu_helper.o

HLA_GEM5.o: HLA_GEM5.cc HLA_GEM5.hh
	$(CXX) $(CXXFLAGS) -c HLA_GEM5.cc -o HLA_GEM5.o

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $(TARGET) $(OBJS) $(LDLIBS)

clean:
	rm -f $(OBJS) $(TARGET)
