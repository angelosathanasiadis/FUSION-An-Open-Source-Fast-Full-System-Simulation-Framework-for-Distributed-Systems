# CMake generated Testfile for 
# Source directory: /home/simbricks/COSSIM/cCERTI/test/utility
# Build directory: /home/simbricks/COSSIM/cCERTI/test/utility
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CheckXML2000 "/home/simbricks/COSSIM/cCERTI/test/utility/CertiCheckXML" "/home/simbricks/COSSIM/cCERTI/test/utility/T2000.xml")
set_tests_properties(CheckXML2000 PROPERTIES  PASS_REGULAR_EXPRESSION "2000" _BACKTRACE_TRIPLES "/home/simbricks/COSSIM/cCERTI/test/utility/CMakeLists.txt;27;add_test;/home/simbricks/COSSIM/cCERTI/test/utility/CMakeLists.txt;0;")
add_test(CheckXML2010 "/home/simbricks/COSSIM/cCERTI/test/utility/CertiCheckXML" "/home/simbricks/COSSIM/cCERTI/test/utility/T2010.xml")
set_tests_properties(CheckXML2010 PROPERTIES  PASS_REGULAR_EXPRESSION "2010" _BACKTRACE_TRIPLES "/home/simbricks/COSSIM/cCERTI/test/utility/CMakeLists.txt;29;add_test;/home/simbricks/COSSIM/cCERTI/test/utility/CMakeLists.txt;0;")
