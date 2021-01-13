#include <iostream>
using std::cin;
using std::cout;

int main() {
  for(int column = 0; column < 4; column++) {
    for(int row = 0; row < 8; row++) {
      cout << "#";
    }
    cout << "\n";
  }
  return 0;
}
