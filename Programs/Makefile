#Makefile version 1.1

CC= gcc
CFLAGS= -c -Wall

all: output

output: binary_search.o
	$(CC) binary_search.o -o output 

binary_search.o: binary_search.c
	$(CC) $(CFLAGS) binary_search.c

clean:
	rm -rf *.o output

