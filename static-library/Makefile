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

lib: ll.o
	ar rvs ll.a ll.o

.PHONY: install

install: ll.a ll.h
	mkdir -p ll_lib
	install ll.a ll_lib
	install ll.h ll_lib

.PHONY: clean

clean:
	rm -rf $(OBJECTS) list
