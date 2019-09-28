solve: solve.o sudoku.o
	g++ -o solve solve.o sudoku.o

solve.o: solve.cpp sudoku.h
	g++ -c solve.cpp

sudoku.o: sudoku.cpp sudoku.h
	g++ -c sudoku.cpp

transform: transform.cpp
	g++ -o transform transform.cpp

generate: generate.cpp
	g++ -o generate generate.cpp

test: test.cpp
	g++ -o test test.cpp sudoku.o
