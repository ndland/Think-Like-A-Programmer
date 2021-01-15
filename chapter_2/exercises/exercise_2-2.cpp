// Think Like A Programmer Exercise 2-2
//
// Write a program using only single-character output statements that
// output a hash mark, a space, or an end-of-line.
//
// Write a program that produces the following shape:
//
//    ##
//   ####
//  ######
// ########
// ########
//  ######
//   ####
//    ##

#include <iostream>
using std::cin;
using std::cout;

void drawTriangle(int);

int main() {
  // Upper half
  for(int row = 4; row >= 1; row--) {
    drawTriangle(row);
  }

  // Lower half
  for(int row = 1; row <= 4; row++) {
    drawTriangle(row);
  }
  return 0;
}

void drawTriangle(int row) {
    for(int space = 0; space < (row - 1); space++) {
      cout << " ";
    }
    for(int hash = 0; hash < 8 - (row - 1) * 2; hash++) {
      cout << "#";
    }
    cout << "\n";
}
