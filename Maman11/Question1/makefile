CC=gcc
CFLAGS=-std=c99 -pedantic -Wall

all: my_add_main

my_add_main: my_add.o main.o
	$(CC) $(CFLAGS) -o my_add_main my_add.o main.o

my_add.o: my_add.c my_add.h
	$(CC) $(CFLAGS) -c my_add.c

main.o: main.c my_add.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f my_add_main my_add.o main.o
