all: construct.o
	gcc -o construct construct.o

construct.o: construct.c construct.h
	gcc -c construct.c

run:
	./construct

clean:
	rm *.o
	rm *.exe
