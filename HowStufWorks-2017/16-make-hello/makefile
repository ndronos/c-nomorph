a.out: main.o hello.o
	gcc -o a.out main.o hello.o
main.o: main.c hello.h
	gcc -c -g main.c
util.o: hello.c hello.h
	gcc -c -g hello.c

