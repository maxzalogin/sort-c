CC=gcc
CFLAGS=-Wall -Wextra -Werror
BUILD=build/
SRC=src/

main.o: 
	$(CC) $(CFLAGS) -c src/main.c

sort.o:
	$(CC) $(CFLAGS) -c src/sort.c

main: $(SRC)main.o $(SRC)sort.o
	$(CC) $(CFLAGS) $(SRC)main.o $(SRC)sort.o -o$(BUILD)main

clean:
	rm -rf $(SRC)*.o main
	rm $(BUILD)main

run:
	build/main