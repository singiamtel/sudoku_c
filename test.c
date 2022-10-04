#include "sudoku.h"
#include <assert.h>
#include <stdio.h>

void test_legal(){
	int board[9][9] = {
		{ -1, -1, -1,  2,  6, -1,  7, -1,  1 },
		{  6,  8, -1, -1,  7, -1, -1,  9, -1 },
		{  1,  9, -1, -1, -1,  4,  5, -1, -1 },
		{  8,  2, -1,  1, -1, -1, -1,  4, -1 },
		{ -1, -1,  4,  6, -1,  2,  9, -1, -1 },
		{ -1,  5, -1, -1, -1,  3, -1,  2,  8 },
		{ -1, -1,  9,  3, -1, -1, -1,  7,  4 },
		{ -1,  4, -1, -1,  5, -1, -1,  3,  6 },
		{  7, -1,  3, -1,  1,  8, -1, -1, -1 }
	};
	assert(isLegal(board, 0, 0, 3));
	assert(isLegal(board, 0, 0, 4));
	assert(!isLegal(board, 0, 0, 2));
	assert(!isLegal(board, 0, 0, 7));
	assert(!isLegal(board, 0, 0, 1));
	printf("isLegal tests passed\n");
}

int main(){
	test_legal();
}
