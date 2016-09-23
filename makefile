  # the compiler: gcc for C program, define as g++ for C++
CC = g++

  # compiler flags:
  #  -g    adds debugging information to the executable file
  #  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

  # the build target executable:
TARGET = roman
TESTS = tests

all: roman

roman: $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp
	./roman

# -ftest-coverage -fprofile-arcs

tests: $(TESTS).cpp
	$(CC) -isystem $(TESTS)/include -I$(TESTS) \
		-pthread -c $(TESTS)/usr/include/gtest-all.cc

	ar -rv libgtest.a gtest-all.o

	$(CC) -isystem ${GTEST_DIR}/include -pthread /usr/lib/gtest-all.cc libgtest.a \
    -o tests

clean:
	$(RM) $(TARGET) $(TESTS)
