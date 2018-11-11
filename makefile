all: main.c
	gcc main.c

run:
	./a.out

clear:
	rm *.o ./a.out err.txt