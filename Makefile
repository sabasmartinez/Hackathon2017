main: Masterquiz.o Lai.o
	g++ Masterquiz.o Lai.o -o main
Masterquiz.o: Masterquiz.cpp
	g++ -c -std=c++11 Masterquiz.cpp
Lai.o: Lai.cpp
	g++ -c -std=c++11 Lai.cpp
