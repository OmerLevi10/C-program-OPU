CC = gcc
CFLAGS = -Wall -ansi -pedantic

partial_sums: partialSums.o partialSumsUtils.o
	$(CC) $(CFLAGS) partialSums.o partialSumsUtils.o -o partial_sums

partialSums.o: partialSums.c partialSumsUtils.h
	$(CC) -c $(CFLAGS) partialSums.c -o partialSums.o

partialSumsUtils.o: partialSumsUtils.c partialSumsUtils.h
	$(CC) -c $(CFLAGS) partialSumsUtils.c -o partialSumsUtils.o

clean:
	rm -f partial_sums partialSums.o partialSumsUtils.o