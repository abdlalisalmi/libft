OBJECTS = main.c
CFLAGS = -g -Wall
NAME = MyProgramme
build: $(OBJECTS)
	cc $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f *.o

clear:
	make clean # Do you mean 'make clean'

run:
	make build -B && echo && ./$(NAME)