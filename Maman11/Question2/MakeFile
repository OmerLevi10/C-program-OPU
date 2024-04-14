CC=gcc
CFLAGS=-std=c99 -pedantic -Wall

all: suffix_main

suffix_main: suffix.o main.o
	$(CC) $(CFLAGS) -o suffix_main suffix.o main.o

suffix.o: suffix.c suffix.h
	$(CC) $(CFLAGS) -c suffix.c

main.o: main.c suffix.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f suffix_main suffix.o main.o
