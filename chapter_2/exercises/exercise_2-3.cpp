// Think Like A Programmer Exercise 2-2
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

int main() {
  // Top
  for(int row = 1; row <= 4; row++) {
    for(int space = 1; space <= row - 1; space++) {
      cout << " ";
    }
    for(int hash = 1; hash <= row; hash++) {
      cout << "#";
    }
    for(int space = 1; space <= (16 - (row * 4)); space++) {
      cout << " ";
    }
    for(int hash = 1; hash <= row; hash++) {
      cout << "#";
    }
    cout << "\n";
  }

  // Bottom
  for(int row = 4; row >= 1; row--) {
    for(int space = 1; space <= row - 1; space++) {
      cout << " ";
    }
    for(int hash = 1; hash <= row; hash++) {
      cout << "#";
    }
    for(int space = 1; space <= (16 - (row * 4)); space++) {
      cout << " ";
    }
    for(int hash = 1; hash <= row; hash++) {
      cout << "#";
    }
    cout << "\n";
  }
}
