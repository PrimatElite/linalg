CC = gcc
CFLAGS = -fpic -g -Wall -pedantic -Wextra
LDFLAGS = -shared
SOURCES = src/matrix.c matrix.h
TARGET = matrix.so

all: 
	$(CC) $(CFLAGS) $(LDFLAGS) $(SOURCES) -o $(TARGET)
