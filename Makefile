exec = OrLang.out
sources = $(wildcard src/*.c)
objects = $(sources: .c=.o)
flags = -g


$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $0

install:
	make
	cp ./OrLang.out /usr/local/bin/orlang
	
clean:
	-rm *.out
	-rm *.o
	-rm src/*.o
