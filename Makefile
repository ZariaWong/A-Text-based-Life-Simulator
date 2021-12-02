life.o: life.cpp life.h
      g++ -c life.cpp
      
start.o: start.cpp life.h 
      g++ -c start.cpp
      
menu.o: menu.cpp menu.h
      g++ -c start.cpp

start: life.o start.o menu.o
      g++ life.o start.o menu.o -o start
      
clean:
      rm -f start start.o life.o menu.o
      
.PHONY: clean
