
bin/sonicmain : src/sonicmain.cpp include/*.hpp
	c++ src/sonicmain.cpp -o bin/sonicmain -I include/ -lcurses

run : bin/sonicmain
	./bin/sonicmain