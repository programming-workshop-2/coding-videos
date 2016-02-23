CC = g++
CFLAGS = 
LDFLAGS =

SOURCES = cmdline.cpp
HEADERS = 
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = cmdline

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm -rf *.o $(EXECUTABLES)
