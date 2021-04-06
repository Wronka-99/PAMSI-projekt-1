CPPFLAGS= -c -g -Wall -pedantic -std=c++17 

_start__: algorytm
	./algorytm

algorytm: main.o stosT.o stosL.o
	g++ -o algorytm main.o stosT.o stosL.o


main.o: main.cpp stosT.hh stosL.hh
	g++ ${CPPFLAGS} -o main.o main.cpp


stosT.o: stosT.cpp
	g++ ${CPPFLAGS} -o stosT.o stosT.cpp


stosL.o: stosL.cpp
	g++ ${CPPFLAGS} -o stosL.o stosL.cpp


clear:
	rm -rf algorytm main.o stosT.o stosL.o 