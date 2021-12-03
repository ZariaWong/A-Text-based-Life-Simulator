FLAGS = -pedantic-errors -std=c++11

start.o: start.cpp life.h menu.h
	g++ $(FLAGS) -c $<

menu.o: menu.cpp menu.h
	g++ $(FLAGS) -c $<

life.o: life.cpp life.h menu.h
	g++ $(FLAGS) -c $<

start: start.o life.o menu.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f start start.o life.o menu.o

.PHONY: clean
