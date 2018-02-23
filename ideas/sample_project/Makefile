#https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html
#https://hiltmon.com/blog/2013/07/03/a-simple-c-plus-plus-project-structure/

CC = g++
CFLAGS = -g -Wall
TARGET = a.out

all: $(TARGET)

$(TARGET): hello.o thing.o being.o
		$(CC) $(CFLAGS) -o $(TARGET) hello.o thing.o being.o

hello.o: hello.cpp
		$(CC) $(CFLAGS) -c hello.cpp 

thing.o: thing.cpp
		$(CC) $(CFLAGS) -c thing.cpp

being.o: being.cpp
		$(CC) $(CFLAGS) -c being.cpp

clean:
	rm -f hello.o thing.o being.o

clean_all:
	rm -f hello.o thing.o being.o $(TARGET)