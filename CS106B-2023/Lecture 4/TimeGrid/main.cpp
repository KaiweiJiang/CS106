/*
 * File: main.cpp
 * --------------
 * Time passing a grid by reference versus value.
 */

#include "grid.h"
#include "console.h"
#include "simpio.h"
#include "testing/SimpleTest.h"
using namespace std;

const int NUM_ROWS = 10000;
const int NUM_COLS = 10000;


void spreadPositivityRef(Grid<int>& grid) {
    for (int row = 0; row < grid.numRows(); row++) {
        for (int col = 0; col < grid.numCols(); col++) {
            if (grid[row][col] < 0) {
                grid[row][col] = grid[row][col] * -1;
            }
        }
    }
}

Grid<int> spreadPositivityValue(Grid<int> grid) {
    for (int row = 0; row < grid.numRows(); row++) {
        for (int col = 0; col < grid.numCols(); col++) {
            if (grid[row][col] < 0) {
                grid[row][col] = grid[row][col] * -1;
            }
        }
    }
    return grid;
}

int main() {
    if (runSimpleTests(SELECTED_TESTS)) {
        return 0;
    }
    return 0;
}

// BEGIN TESTS

PROVIDED_TEST("Time ref function") {
    Grid<int> grid(NUM_ROWS, NUM_COLS);
    for (int row = 0; row < grid.numRows(); row++) {
        for (int col = 0; col < grid.numCols(); col++) {
            grid[row][col] = rand();
        }
    }
    TIME_OPERATION(NUM_ROWS * NUM_COLS, spreadPositivityRef(grid));
}

PROVIDED_TEST("Time value function") {
    Grid<int> grid(NUM_ROWS, NUM_COLS);
    for (int row = 0; row < grid.numRows(); row++) {
        for (int col = 0; col < grid.numCols(); col++) {
            grid[row][col] = rand();
        }
    }
    TIME_OPERATION(NUM_ROWS * NUM_COLS, spreadPositivityValue(grid));
}
