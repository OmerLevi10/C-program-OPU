suffix_main: suffix.o main.o
	gcc -Wall -ansi -pedantic -o suffix.o main.o suffix_main

suffix.o: suffix.c suffix.h
	gcc -c -Wall -ansi -pedantic suffix.c

main.o: main.c suffix.h
	gcc -c -Wall -ansi -pedantic main.c

