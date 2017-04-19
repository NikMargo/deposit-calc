CC=g++
CFLAGS= -I src -Wall -Werror
EXECUTABLE = bin/prog 
DIR = build


all: $(DIR)/main.o $(DIR)/deposit.o
	mkdir -p bin
	$(CC) $(DIR)/main.o $(DIR)/deposit.o -o $(EXECUTABLE)

$(DIR)/main.o: src/main.cpp
	mkdir -p build
	$(CC) $(CFLAGS) -c src/main.cpp -o $(DIR)/main.o

$(DIR)/deposit.o: src/deposit.cpp
	$(CC) $(CFLAGS) -c src/deposit.cpp -o $(DIR)/deposit.o


#.PHONY clean
clean:
	rm -rf build/*.o bin/*
