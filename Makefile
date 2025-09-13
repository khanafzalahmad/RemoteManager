CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = main.cpp InquiryManager.cpp Strategy.cpp Logger.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = SecureInquiryProcessor

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

debug:
	g++ -std=c++11 -Wall -I./header src/main.cpp src/InquiryManager.cpp src/Strategy.cpp src/Logger.cpp -o SecureInquiryProcessor