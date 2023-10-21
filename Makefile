SRC = ./src/main/main.cpp\
      ./src/home/home.cpp\

IFLAGS = -I./headers/main_header\
          -I./headers/home 


EXECUTABLE = FSM.sample
RM = rm
CC = g++
CFLAGS = -Wall -Werror -g -O0 -std=c++14
LFLAGS = -lgtest -lgmock -lgtest_main -lpthread
DFLAGS = -DTEST

OBJS = $(SRC:.cpp=.o)
OBJSCLEAN = $(filter-out %.cpp, $(OBJS))

build:$(EXECUTABLE)

$(EXECUTABLE):$(OBJS)
	$(CC) $(CFLAGS) $(DFLAGS) $(IFLAGS) $(OBJS) -o$@ $(LFLAGS)
%.o: %.cpp
	$(CC) $(CFLAGS) $(DFLAGS) $(IFLAGS) -c $< -o$@
 
run:
	./$(EXECUTABLE)
clean:
	$(RM) $(OBJSCLEAN)
