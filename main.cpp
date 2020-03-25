#include <stdlib.h>
#include <iostream>

#include "math_tools.h"
#include "display_tools.h"

int main(void) {
  Matrix original, inversa;
  zeroes(original, 3);

  original.at(0).at(0) = 2;
  original.at(0).at(1) = 2;
  original.at(0).at(2) = 3;
  original.at(1).at(0) = 4;
  original.at(1).at(1) = 5;
  original.at(1).at(2) = 6;
  original.at(2).at(0) = 7;
  original.at(2).at(1) = 8;
  original.at(2).at(2) = 9;

  cout << "\tOriginal";
  cout << endl;
  showMatrix(original);
  cout << endl;

  cout << "\tInversa";
  cout << endl;
  matrizInversa(original, inversa);
  showMatrix(inversa);
  return 0;
}
