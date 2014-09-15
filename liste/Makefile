CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDFLAGS=-lm
TARGET=liste

all: $(TARGET)

# Définition des règles
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< $(LDFLAGS) -o $@
%: %.o
	$(CC) $^ $(LDFLAGS) -o $@

clean:
	rm -rf *.o *~
 
mrpropper: 
	rm -rf *.o *~ rm $(TARGET)

# Dépendances entre fichiers
liste.o: liste.c liste.h
main.o: main.c liste.h

liste: main.o liste.o

