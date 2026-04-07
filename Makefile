CXX = g++
CXXFLAGS = -std=c++2b -Wall -g -pthread # Añadido -pthread
LDFLAGS = -pthread # Añadido -pthread

TARGET = main
SRCS = main.cpp arit.cpp \
       util.cpp \
	   sorting.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

# Codigo de clean adecuado para windows:
# del /f /q $(OBJS) $(TARGET).exe