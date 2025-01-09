#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  while (i <= 9) {
    square = i * i;
    std::cout << i << " " << square << "\n";
    i++;
  } 
}

/*
0 0
1 1
2 4
3 9
4 16
5 25
6 36
7 49
8 64
9 81
*/