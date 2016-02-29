CC = g++
CFLAGS = -std=c++11
LDFLAGS =

SOURCES = main.cpp
HEADERS = Person.h Student.h
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = inherit

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)
