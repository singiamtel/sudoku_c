.DEFAULT_GOAL := main
CC = gcc
debug_flags = -Wall -Wpedantic -g -std=C89
flags = -O3 -std=C89
out = solver

debug: 
	${CC} ${debug_flags} main.c sudoku.c -o ${out}

main:
	${CC} ${flags} main.c sudoku.c -o ${out}

test:
	${CC} ${flags} test.c sudoku.c -o ${out}

clean:
	rm ${out}
