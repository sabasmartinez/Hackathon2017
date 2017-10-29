main: main.o fn.o
	g++ main.o fn.o -o main
main.o: main.cpp
	g++ -c -std=c++11 main.cpp
fn.o: fn.cpp
	g++ -c -std=c++11 fn.cpp
