TARGET: libdll.so
CC = gcc
CFLAGS = -Wall -Wextra
.PHONY: install

dll.o: dll.c
	$(CC) $(CFLAGS) -fPIC -c dll.c -o dll.o

application: dll.o application.c
	$(CC) $(CFLAGS) application.c -o application dll.o

libdll.so: dll.o
	$(CC) $(CFLAGS) dll.o -shared -o libdll.so

install: libdll.so
	install -m 0755 libdll.so /usr/local/lib
	ldconfig

clean:
	rm *.o libdll.so application 
