my_add_main: my_add.o main.o
	gcc -Wall -ansi -pedantic -o my_add_main my_add.o main.o

my_add.o: my_add.c my_add.h
	gcc -c -Wall -ansi -pedantic my_add.c

main.o: main.c my_add.h
	gcc -c -Wall -ansi -pedantic main.c