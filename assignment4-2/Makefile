CC=gcc
CFLAGS=-std=gnu99

all: caesar monopoly

caesar: FORCE
	rm -rf *~ caesar
	$(CC) -o caesar caesar.c caesar_main.obj $(CFLAGS)

monopoly: FORCE
	rm -rf *~ monopoly
	$(CC) -o monopoly monopoly.c monopoly_main.obj $(CFLAGS)

clean:
	rm -rf *~ caesar monopoly

FORCE: