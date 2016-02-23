CC = g++
CFLAGS = 
LDFLAGS =

SOURCES = vec2.cpp main.cpp 
HEADERS = vec2.h
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = vec2

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm -rf *.o $(EXECUTABLES)
