CC = gcc
CFLAGS = -Wall -pedantic
LIBS = -lncurses
OBJ_FILES = netsio.o midibridge.o 
%.o : %.c
		$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

all: 	$(OBJ_FILES)
		$(CC) $(CFLAGS) $(OBJ_FILES) fujinetbridge.c $(LIBS) -o fujinetbridge

clean:
		rm -f $(OBJ_FILES) fujinetbridge