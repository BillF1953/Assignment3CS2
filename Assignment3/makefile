# Makefile for Assignment 3
# Tyler Forrester
# July 20, 2016
CXX = g++ 
OBJSSUM = Creature.o
SRCSSUM = Creature.cpp
OBJSAVG = Dice.o
SRCSAVG = Dice.cpp
OBJSL1 = InputValid.o
SRCSL1 = InputValid.cpp
OBJSL2 = main.o
SRCSL2 = main.cpp
HEADERS = Creature.hpp
HEADERA = Dice.hpp
HEADERI = InputValid.hpp
OBJS4 = Reptile.o
HEADER4 = Reptile.hpp
SRCS4 = Reptile.cpp
OBJS5 = Medusa.o
HEADER5 = Medusa.hpp
SRCS5 = Medusa.cpp
OBJS6 = Gollum.o
HEADER6 = Gollum.hpp
SRCS6 = Gollum.cpp
OBJS7 = BlueMen.o
HEADER7 = BlueMen.hpp
SRCS7 = BlueMen.cpp
OBJS8 = HarryPotter.o
HEADER8 = HarryPotter.hpp
SRCS8 = HarryPotter.cpp

PROG = Assignment3
#PROGT = Test

all: $(PROG) 

$(PROG): $(OBJSL2) $(OBJSSUM) $(OBJSAVG) $(OBJSL1) $(OBJS4) $(OBJS5) $(OBJS6) $(OBJS7) $(OBJS8)
	$(CXX) $(OBJSAVG) $(OBJSL2) $(OBJSSUM) $(OBJSL1) $(OBJS4) $(OBJS5) $(OBJS6) $(OBJS7) $(OBJS8) -o $(PROG)
$(OBJSL2): $(SRCSL2) $(HEADERS) $(HEADERA) $(HEADERI)
	$(CXX) -c $(SRCSL2)
$(OBJSAVG): $(SCRSAVG) $(HEADERA) 
	$(CXX) -c $(SRCSAVG)
$(OBJSL1): $(SRCSL1) $(HEADERI)
	$(CXX) -c $(SRCSL1)
$(OBJSSUM): $(SRCSSUM) $(HEADERS)
	$(CXX) -c $(SRCSSUM)
$(OBJS4): $(SRCS4) $(HEADER4)
	$(CXX) -c $(SRCS4)
$(OBJS5): $(SRCS5) $(HEADER5)
	$(CXX) -c $(SRCS5)
$(OBJS6): $(SRCS6) $(HEADER6)
	$(CXX) -c $(SRCS6)
$(OBJS7): $(SRCS7) $(HEADER7)
	$(CXX) -c $(SRCS7)
$(OBJS8): $(SRCS8) $(HEADER8)
	$(CXX) -c $(SRCS8)
clean:
	rm -rf $(PROG) *.o  *~
