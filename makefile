CPP=g++
CPPFLAGS=-Wall -O2 -std=c++11


.SUFFIXES:
.SUFFIXES: .c .cpp .o .exe


ALL: helloworld.exe gcd.o nCr.o


.cpp.o:
	${CPP} -c ${CPPFLAGS} $<

.o.exe:
	${CPP} -o $@ $<
