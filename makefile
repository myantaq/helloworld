CPP=g++
CFLAGS=-Wall -O2


.cpp.o:
  ${CPP} -c ${CFLAGS} $<

.o.exe:
  ${CPP} -o $@ $<
