all:construct.o 
	gcc -o Test construct.o

construct.o: construct.c construct.h
	gcc -c construct.c

run:
	./Test

clean:
	rm *.o
	rm *.exe
