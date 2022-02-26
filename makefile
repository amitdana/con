con: con.o
	gcc -g -ansi -Wall -pedantic con.o -o con

con.o: con.c
	gcc -c -ansi -pedantic -Wall con.c -o con.o


