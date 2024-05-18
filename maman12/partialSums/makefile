partialSums: partialSums.o partialSumsUtils.o
	gcc -Wall -ansi -pedantic partialSums.o partialSumsUtils.o -o partialSums	

partialSums.o: partialSums.c partialSumsUtils.h
	gcc -c -Wall -ansi -pedantic partialSums.c -o partialSums.o

partialSumsUtils.o: partialSumsUtils.c partialSumsUtils.h
	gcc -c -Wall -ansi -pedantic partialSumsUtils.c -o partialSumsUtils.o
