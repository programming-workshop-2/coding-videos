CC = g++
CFLAGS =
LDFLAGS =

SOURCES = main.cpp
INCLUDES = 
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = fnptr

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)
