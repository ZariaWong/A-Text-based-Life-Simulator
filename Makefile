life.o: life.cpp life.h
      g++ -c life.cpp
      
start.o: start.cpp life.h menu.h
      g++ -c start.cpp

start: life.o start.o
      g++ life.o start.o -o start
      
clean:
      rm -f start start.o life.o
      
.PHONY: clean
