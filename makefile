all: game.o story.o look.o talking.o move.o pick.o use.o
	gcc -ansi -Wall -pedantic game.o story.o look.o talking.o move.o pick.o use.o -o play

game:	game.c game.h
	gcc -ansi -Wall -pedantic -c game.c -o game.o

story: story.c game.h
	gcc -ansi -Wall -pedantic -c story.c -o story.o

look: look.c game.h look.h
	gcc -ansi -Wall -pedantic -c look.c -o look.o

talking: talking.c game.h talking.h
	gcc -ansi -Wall -pedantic -c talking.c -o talking.o

move: move.c game.h move.h
	gcc -ansi -Wall -pedantic -c move.c -o move.o

pick: pick.c game.h pick.h
	gcc -ansi -Wall -pedantic -c pick.c -o pick.o

use: use.c game.h use.h
	gcc -ansi -Wall -pedantic -c use.c -o use.o

clean:
	rm *.o
