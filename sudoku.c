#include "sudoku.h"

int solve(int board[9][9], int x, int y) {
	/* Returns 1 if solved, 0 otherwise 
	 * Assumes empty spaces are always -1
	 * Assumes the input is valid
	 * Solves in-place, restores original array if no solution was found
	*/
	if(x == 8 && y == 8 && board[x][y] != 0){
		return 1;
	}
	if(x>8){
		x = 0;
		y++;
	}
	if(board[x][y] != -1){
		return solve(board, x+1, y);
	}
	int n;
	for(n = 1; n <= 9;++n){
		if(isLegal(board, x, y, n)){
			board[x][y] = n;
			if(solve(board, x+1, y)){
				return 1;
			}
			board[x][y] = -1;
		}
	}
	return 0;
}

int isLegal(int board[9][9], int x, int y, int n){
	int i, j;
	for(i = 0; i < 9; ++i){
		if(board[i][y] == n){
			return 0;
		}
	}
	for(i = 0; i < 9; ++i){
		if(board[x][i] == n){
			return 0;
		}
	}
	int x_offset = (x / 3) * 3;
	int y_offset = (y / 3) * 3;
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			if(board[x_offset + i][y_offset + j] == n){
				return 0;
			}
		}
	}
	return 1;
}

void print_board(int board[9][9]){
	int i, j;
	printf("--------------------------\n");
	for(i = 0; i < 9; ++i){
		for(j = 0; j < 9; ++j){
			if(board[i][j] != -1){
				printf(" ");
			}
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------------\n");
}
