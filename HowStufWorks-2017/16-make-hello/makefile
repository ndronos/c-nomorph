LDLIBS=-lm

CC = gcc

a.out: main.o hello.o
	cc -o a.out main.o hello.o
main.o: main.c hello.h
	cc -c -g main.c
util.o: hello.c hello.h
	cc -c -g hello.c

