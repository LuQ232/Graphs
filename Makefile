all: exe clean

exe: main.o graph.o dijkstra.o file_staff.o tests.o
	g++  main.o graph.o dijkstra.o file_staff.o tests.o  -o exe

main.o: ./src/main.cpp
	g++ -c ./src/main.cpp

dijkstra.o: ./src/dijkstra.cpp
	g++ -c ./src/dijkstra.cpp

graph.o: ./src/graph.cpp
	g++ -c ./src/graph.cpp

file_staff.o: ./src/file_staff.cpp
	g++ -c ./src/file_staff.cpp

tests.o: ./src/tests.cpp
	g++ -c ./src/tests.cpp

clean:
	rm -f *.o *~ 
	rm -f ./data/*.txt
	rm -f ./data/MATRIX/25/*.txt
	rm -f ./data/MATRIX/50/*.txt
	rm -f ./data/MATRIX/75/*.txt
	rm -f ./data/MATRIX/100/*.txt
	mkdir -p ./data/MATRIX/25 ./data/MATRIX/50 ./data/MATRIX/75 ./data/MATRIX/100 