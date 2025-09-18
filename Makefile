CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -g -O0
LDFLAGS = -lcurl
TARGET = main
SRCS = $(wildcard *.cpp)

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $(SRCS) $(LDFLAGS)

run: all
	./$(TARGET)

debug: all
	gdb ./$(TARGET)

gdbserver: all
	@echo "Iniciando gdbserver en puerto :2345"
	gdbserver :2345 ./$(TARGET)

clean:
	rm -f $(TARGET) *.o
