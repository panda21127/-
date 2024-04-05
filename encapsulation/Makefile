CC=g++
CFLAGS=-I.

objects = main Main.o



all: $(objects)

start:
	clear
	./Main

main : Main.o
	$(CC) -o Main Main.o $(CFLAGS)

Main.o :
	$(CC) -o Main.o -c  Main_encapsulation.cpp $(CFLAGS)

clean :
	rm Main.o Main