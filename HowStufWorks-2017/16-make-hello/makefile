CFLAGS=-g -Wall -std=gnu11
LDLIBS=-lm

CC = gcc
#CC = clang

a.out: main.o hello.o
	cc -o a.out main.o hello.o
main.o: main.c hello.h
	cc -c main.c
util.o: hello.c hello.h
	cc -c hello.c

