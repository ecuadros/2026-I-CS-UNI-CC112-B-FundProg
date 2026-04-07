CXX = g++
CXXFLAGS = -std=c++2b -Wall -g -pthread
LDFLAGS = -pthread

TARGET = main.exe
SRCS = main.cpp arit.cpp util.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /f *.o *.exe

.PHONY: all clean