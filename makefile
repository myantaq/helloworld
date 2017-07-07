CPP=g++
CFLAGS=-Wall -O2


.SUFFIXES:
.SUFFIXES: .c .cpp .o .exe


ALL: helloworld.exe gcd.o


.cpp.o:
	${CPP} -c ${CFLAGS} $<

.o.exe:
	${CPP} -o $@ $<
