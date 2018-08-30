#Archivo Makefile simple

PROYECTO=muestreo
DESTDIR=/usr/local/bin
CFLAGS=-Wall
LDFLAGS=-lm
CC=gcc



all: $(PROYECTO)

#una regla de patron
%.o: %.c 
	$(CC) -c $< $(CFLAGS)

#ejecuta los .o que se acaban de crear
#esta parte de abajo es la que se va a cambiar para despues mandarla como tarea
#$(PROYECTO): muestreo.o procesamiento.o archivos.o
#	$(CC) $^ -o $@ $(LDFLAGS)

#el cambio es lo siguiente 
muestreo : $(wildcard *.o) 
	$(CC) $^ -o $@ $(LDFLAGS)

#PHONY es una palabra ya reservada por eso va con .PHONY
.PHONY: clean

install: all
#si no existe el bin crealo
	if[ ! -d $(DESTDIR) ]; then \
		sudo mkdir $(DESTDIR); \
	fi; \
	sudo cp muestreo $(DESTDIR)

uninstall:
	sudo rm /usr/local/bin/muestreo

#borra todos los .o y los de muestreo
clean:
	rm -f *.o muestreo
