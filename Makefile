CC=gcc
CFLAGS=-Wall -Wextra -Werror
DIR=build/

buble-sort: 
	$(CC) $(CFLAGS) src/buble-sort.c -o $(DIR)main
