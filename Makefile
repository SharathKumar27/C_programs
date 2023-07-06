ABC.exe:main.o big2.o fact.o rev.o big3.o palin.o sort.o add.o
	gcc -o ABC.exe main.o big2.o fact.o rev.o big3.o palin.o sort.o add.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
rev.o:rev.c
	gcc -c rev.c
big3.o:big3.c
	gcc -c big3.c
palin.o:palin.c
	gcc -c palin.c
sort.o:sort.c
	gcc -c sort.c
add.o:add.c
	gcc -c add.c
clean:
	rm -rf *.o
