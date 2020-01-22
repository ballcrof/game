all: game.o story.o look.o talking.o
	gcc -ansi -Wall -pedantic game.o story.o look.o talking.o -o play

game:	game.c header.h
	gcc -ansi -Wall -pedantic -c game.c -o game.o

story: story.c header.h
	gcc -ansi -Wall -pedantic -c story.c -o story.o

look: look.c header.h
	gcc -ansi -Wall -pedantic -c look.c -o look.o

talking: talking.c header.h
	gcc -ansi -Wall -pedantic -c talking.c -o talking.o

clean:
	rm *.o
