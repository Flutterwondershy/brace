CC = gcc
EXEC = bin/brace
DEBUG = yes

ifeq ($(DEBUG),yes)
	CFLAGS = -g -W -Wall
else
	CFLAGS =
endif

all : $(EXEC)

$(EXEC) : obj/main.o obj/brace.o
	$(CC) $^ -o $(EXEC)

obj/%.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clear:
	rm obj/* -f
	rm bin/* -f

install: all
	cp ${EXEC} ~/.cmd
