CC=gcc
CFLAGS=-Wall -Wextra -Werror
BUILD=build/
SRC=src/

main.o: 
	gcc -c src/main.c

sort.o:
	gcc -c src/sort.c

main: $(SRC)main.o $(SRC)sort.o
	gcc $(SRC)main.o $(SRC)sort.o -o $(BUILD)main

clean:
	rm -rf $(SRC)*.o main
	rm $(BUILD)main

run:
	build/main