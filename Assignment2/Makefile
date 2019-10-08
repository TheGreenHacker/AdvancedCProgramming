CC = gcc
CFLAGS = -Wall -Wextra

default: exercise1.c exercise2.c
	$(CC) $(CFLAGS) exercise1.c -o exercise1
	$(CC) $(CFLAGS) exercise2.c -o exercise2

exercise1: exercise1.c
	$(CC) $(CFLAGS) exercise1.c -o exercise1

exercise2: exercise2.c
	$(CC) $(CFLAGS) exercise2.c -o exercise2

clean:
	rm exercise1 exercise2