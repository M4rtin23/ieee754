LIBS = /usr/local/lib/bitarray.so
all: ieee754

ieee754: main.c
	gcc main.c ${LIBS} -o ieee754

install: all
	cp ieee754 /usr/local/bin/

uninstall:
	rm -f /usr/local/bin/ieee754

clean:
	rm -f ieee754
