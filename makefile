all: bin/programm
 
bin/programm: build/main.o build/func.o
	g++ -Wall -Werror build/main.o build/func.o

build/main.o: src/main.cpp
	g++ -Wall -Werror src/main.cpp build/main.o

build/func.o: src/func.cpp
	g++ -Wall -Werror src/func.cpp build/func.o

clean: 
	rm -rf build/*.o

