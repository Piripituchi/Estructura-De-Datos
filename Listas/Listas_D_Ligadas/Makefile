a.out: main.o listadl.o
	gcc main.o listadl.o
main.o: main.c
	gcc -c main.c
listadl.o: listadl.c
	gcc -c listadl.c
run: a.out
	./a.out
clear: 
	rm a.out main.o listadl.o
