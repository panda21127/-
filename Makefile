CC=g++
CFLAGS=-I.

objects = main_e main_i main_p main_vd

all: $(objects)

start:
	clear
	./Main_encapsulation 
	@echo $( )
	./Main_inheritance 
	@echo $( )
	./Main_polymorphism
	@echo $( )
	./Main_virtual_destructor

main_e: 
	$(CC) -o Main_encapsulation encapsulation/Main_encapsulation.cpp $(CFLAGS)

main_i: 
	$(CC) -o Main_inheritance inheritance/Main_inheritance.cpp $(CFLAGS)

main_p: 
	$(CC) -o Main_polymorphism polymorphism/Main_polymorphism.cpp $(CFLAGS)

main_vd: 
	$(CC) -o Main_virtual_destructor virtualDestructor/Main_virtual_destructor.cpp $(CFLAGS)
	
clean :
	rm  Main_encapsulation Main_inheritance Main_polymorphism Main_virtual_destructor