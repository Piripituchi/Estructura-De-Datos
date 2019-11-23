a.out: main.o pila.o
	gcc main.o pila.o
pila.o: pila.c
	gcc -c pila.c
main.o: main.c
	gcc -c main.c
clear:
	rm pila.o main.o a.out
run: a.out
	./a.out
