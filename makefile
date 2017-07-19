#CC will be compiler to use
#CFLAGS will be options to pass
#SOURCES will be cpp files
#OBJECTS will be .o files
#EXECUTABLE will be completed program
# -c creates object files/does not link
# -g for debugging information
# -Wall for all warnings
CC = g++
STD = -std=c++11
CFLAGS = -c -g -Wall
SOURCES = main.cpp building.cpp people.cpp student.cpp teacher.cpp university.cpp menu.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = lab4


all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(STD) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *o $(EXECUTABLE)