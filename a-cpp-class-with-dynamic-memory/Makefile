CC = g++
CFLAGS = 
LDFLAGS =

SOURCES = Arr.cpp main.cpp
HEADERS = Arr.h
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = arr

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm -rf *.o $(EXECUTABLES)
