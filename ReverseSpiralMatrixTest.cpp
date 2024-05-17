#include <iostream>
using namespace std;
#include “ReverseSpiralMatrix.h”

int main() {
  ReverseSpiralMatrix rsmatrix;
  std::ifstream file_in("input.txt");
  std::ofstream file_out("output.txt");

if (file_in.is_open() &&
file_out.is_open()) {
   while (!file_in.eof()) {
      file_in >> rsmatrix;
      rsmatrix.findElement();
      file_out << rsmatrix;
    }
 }
return 0;
}
