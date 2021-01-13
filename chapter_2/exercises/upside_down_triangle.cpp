// Think Like A Programmer Exercise 2-1
//
// Write a program using only single-character output statements that
// output a hash mark, a space, or an end-of-line.
//
// Write a program that produces the following shape:
//
// ########
//  ######
//   ####
//    ##

#include <iostream>
using std::cin;
using std::cout;

int main() {
  for(int row = 1; row <= 4; row++) {
    for(int space = 0; space < (row - 1); space++) {
      cout << " ";
    }
    for(int hash = 0; hash < 8 - (row - 1) * 2; hash++) {
      cout << "#";
    }
    cout << "\n";
  }
  return 0;
}
