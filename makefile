all: main.o linkedlist.o
	gcc -o out main.o linkedlist.o

linkedlist.o: linkedlist.c
	gcc -c linkedlist.c

main.o: main.c linkedlist.h
	gcc -c main.c

run:
	./out

clean:
	rm *.exe
	rm *.o