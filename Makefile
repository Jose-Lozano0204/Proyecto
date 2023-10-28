
bin/Sonicmain : src/Sonicmain.cpp include/*.hpp
	c++ src/Sonicmain.cpp -o bin/Sonicmain -I include/ -lcurses

run : bin/Sonicmain
	./bin/Sonicmain