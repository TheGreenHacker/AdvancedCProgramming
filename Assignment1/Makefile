TARGET: evaluation

CC = gcc
CFLAGS = -Wall -Wextra

dll.o: dll.c
	$(CC) $(CFLAGS) -c dll.c -o dll.o

diff.o: diff.c
	$(CC) $(CFLAGS) -c diff.c -o diff.o

evaluation.o: evaluation.c 
	$(CC) $(CFLAGS) -c evaluation.c -o evaluation.o

evaluation: dll.o diff.o evaluation.o
	$(CC) $(CFLAGS) -o evaluation dll.o diff.o evaluation.o

clean:
	rm *.o evaluation