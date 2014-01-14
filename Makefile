CFLAGS=-Wall -g

SRC = $(wildcard *.c)

new: $SRC
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
