CC = gcc
CFLAGS = -Wall -pedantic
OBJ_FILES = netsio.o midibridge.o 
%.o : %.c
		$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

all: 	$(OBJ_FILES)
		$(CC) $(CFLAGS) $(OBJ_FILES) -o fujinetbridge
