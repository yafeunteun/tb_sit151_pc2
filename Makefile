CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDFLAGS=lm
TARGET=pc2

all: $(TARGET)

# Définition des règles
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@
%: %.o
	$(CC) $^ -o $@

clean:
	rm -rf *.o *~

mrpropper:
	rm -rf *.o *~ rm $(TARGET)

# Dépendances entre fichiers
liste.o: liste.c liste.h
main.o: main.c liste.h

pc2: main.o liste.o

