CC = g++
CFLAGS =
LDFLAGS =

HEADERS = ll.h stack.h stack_impl.h
SOURCES = stack.cpp stack_impl.cpp main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
LIBRARIES = ll.a
EXECUTABLE = stack

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) $(HEADERS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS) $(LIBRARIES)

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

