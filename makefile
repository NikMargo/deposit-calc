CC=gcc
CFLAGS= -I src -I thirdparty -Wall -Werror
EXECUTABLE = bin/prog
TEST=bin/deposit-test
DIR1=build/test
DIR2=build/src


all: $(DIR2)/main.o $(DIR2)/deposit.o
	mkdir -p bin
	$(CC) $(DIR2)/main.o $(DIR2)/deposit.o -o $(EXECUTABLE)

$(DIR2)/main.o: src/main.c
	mkdir -p build
	mkdir -p build/src
	$(CC) $(CFLAGS) -c src/main.c -o $(DIR2)/main.o

$(DIR2)/deposit.o: src/deposit.c
	$(CC) $(CFLAGS) -c src/deposit.c -o $(DIR2)/deposit.o

all: deposit-calc-test

deposit-calc-test: $(DIR1)/main.o $(DIR1)/deposit_test.o $(DIR1)/validation_test.o $(DIR2)/deposit.o
	mkdir -p bin
	$(CC) $(DIR1)/main.o $(DIR1)/deposit_test.o $(DIR1)/validation_test.o $(DIR2)/deposit.o -o $(TEST)

$(DIR1)/main.o: test/main.c
	mkdir -p build
	mkdir -p build/test
	$(CC) $(CFLAGS) -c test/main.c -o $(DIR1)/main.o

$(DIR1)/deposit_test.o: test/deposit_test.c
	$(CC) $(CFLAGS) -c test/deposit_test.c -o $(DIR1)/deposit_test.o

$(DIR1)/validation_test.o: test/validation_test.c
	$(CC) $(CFLAGS) -c test/validation_test.c -o $(DIR1)/validation_test.o


#.PHONY clean
clean:
	rm -rf build/*.o bin/*
