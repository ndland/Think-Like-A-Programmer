// Think Like A Programmer Exercise 2-3
//
// Write a program using only single-character output statements that
// output a hash mark, a space, or an end-of-line.
//
// Write a program that produces the following shape:
//
// #            #
//  ##        ##
//   ###    ###
//    ########
//    ########
//   ###    ###
//  ##        ##
// #            #

#include <iostream>
using std::cin;
using std::cout;

void calculateSpaces(int);
void printHashes(int);

int main() {
  // Top
  for(int row = 1; row <= 4; row++) {
    calculateSpaces(row);
  }

  // Bottom
  for(int row = 4; row >= 1; row--) {
    calculateSpaces(row);
  }
}

void calculateSpaces(int row) {
  // Left side
  for(int space = 1; space <= row - 1; space++) {
    cout << " ";
  }

  printHashes(row);

  // Right side
  for(int space = 1; space <= (16 - (row * 4)); space++) {
    cout << " ";
  }

  printHashes(row);

  cout << "\n";
}

void printHashes(int row) {
  for(int hash = 1; hash <= row; hash++) {
    cout << "#";
  }
}
