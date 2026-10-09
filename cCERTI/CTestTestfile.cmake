# CMake generated Testfile for 
# Source directory: /home/simbricks/COSSIM/cCERTI
# Build directory: /home/simbricks/COSSIM/cCERTI
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(TestPackage "/usr/bin/gmake" "package")
set_tests_properties(TestPackage PROPERTIES  _BACKTRACE_TRIPLES "/home/simbricks/COSSIM/cCERTI/CMakeLists.txt;793;add_test;/home/simbricks/COSSIM/cCERTI/CMakeLists.txt;0;")
subdirs("include")
subdirs("libHLA")
subdirs("libCERTI")
subdirs("RTIG")
subdirs("RTIA")
subdirs("libRTI")
subdirs("test")
subdirs("doc")
subdirs("scripts")
subdirs("xml")
