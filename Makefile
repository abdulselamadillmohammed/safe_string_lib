opt=

all: clean safestr.so

safestr.so: safestr.o
		cc $^ -o $@ ${opt}

safestr.o: safestr.c
		cc -c $^ -o $@

clean:
		rm -f *.o *.so