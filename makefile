  # the compiler: gcc for C program, define as g++ for C++
CC = g++

  # compiler flags:
  #  -g    adds debugging information to the executable file
  #  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

  # the build target executable:
TARGET = convert3
TESTS = tests

all: convert3

convert3: $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp
	./convert3

# -ftest-coverage -fprofile-arcs

tests: $(TESTS).cpp
	$(CC) convert4 -o $(TESTS) $(TESTS).cpp
	./tests

clean:
	$(RM) $(TARGET)
