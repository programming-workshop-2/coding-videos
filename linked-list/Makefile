CC = g++
CFLAGS = -D DEBUG
LDFLAGS =

HEADERS = ll.h
SOURCES = main.cpp ll.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: list

list: $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm -rf $(OBJECTS) list
