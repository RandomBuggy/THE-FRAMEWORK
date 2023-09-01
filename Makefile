CC=clang
CFLAGS=-Wall -Wextra
LIBS="-lc"

all: framework

framework: main.c
	$(CC) $(CFLAGS) -o framework main.c $(LIBS)
clean: framework
	rm -rvf framework
