opt=-std=c2x

all: clean safestr.so

safestr.so: safestr.o
		cc $^ -o $@ ${opt}

safestr.o: safestr.c
		cc -c $^ -o $@ -std=c2x

clean:
		rm -f *.o *.so