CPP=g++
CFLAGS=-Wall -O2


.SUFFIXES:
.SUFFIXES: .c .cpp .o .exe


ALL: helloworld.exe


.cpp.o:
	${CPP} -c ${CFLAGS} $<

.o.exe:
	${CPP} -o $@ $<
