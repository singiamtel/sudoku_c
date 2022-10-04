# Sudoku solver

Naive sudoku solver in C89, using the [Backtracking algorithm](https://en.wikipedia.org/wiki/Backtracking).
This project was made as an exercise to learn C, so it's not particularly efficient or user-friendly.

## Usage

```bash
make
./solver
```

![Screenshot](screenshotd.png)

There is no validation of the input or the output, so you can make mistakes and break the program.

## Implementation details

The grid is represented as a 9x9 array of integers.
Blank cells are represented as -1. 

The program uses a recursive backtracking algorithm to find the solution.
If no solution is found, the program outputs the message "Unsolvable", and exits

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
