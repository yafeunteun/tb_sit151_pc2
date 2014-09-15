CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDFLAGS=-lm
TARGET=tableau

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
tableau.o: tableau.c tableau.h
main.o: main.c tableau.h

tableau: main.o tableau.o

