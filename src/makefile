all: main

main: main.o campo.o 
	g++ main.o campo.o -o main

main.o: main.cc campo.hh esseri.hh
	g++ -c main.cc -o main.o

campo.o: campo.cc campo.hh
	g++ -c campo.cc -o campo.o

clean:
	rm *.o

