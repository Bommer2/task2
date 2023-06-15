#ifndef NQUEEN_H
#define NQUEEN_H

#include <iostream>

#define N 4

// A utility function to print solution
void printSolution(int board[N][N]);

// A utility function to check if a queen can
// be placed on board[row][col]
bool isSafe(int board[N][N], int row, int col);

// A recursive utility function to solve N
// Queen problem
bool solveNQUtil(int board[N][N], int col);

// This function solves the N Queen problem using
// Backtracking. It mainly uses solveNQUtil() to
// solve the problem.
bool solveNQ();

#endif  // NQUEEN_H
