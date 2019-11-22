a.out: main.o listasl.o
	gcc main.o listasl.o
main.o: main.c
	gcc -c main.c
listasl.o: listasl.c
	gcc -c listasl.c
clear:
	rm listasl.o main.o a.out
run: a.out
	./a.out

