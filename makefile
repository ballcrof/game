game:	game.c story.c header.h
	gcc -ansi -Wall -pedantic -c game.c -o game.o
	gcc -ansi -Wall -pedantic -c story.c -o story.o
	gcc -ansi -Wall -pedantic -c rooms.c -o rooms.o
	gcc -ansi -Wall -pedantic -c talking.c -o talking.o
	gcc -ansi -Wall -pedantic game.o story.o rooms.o talking.o -o play

clean:
	rm *.o
