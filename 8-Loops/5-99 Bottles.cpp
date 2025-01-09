#include <iostream>

int main() {

  // Write a for loop here:
  for (int i = 99; i > 0; i--) {
    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << i - 1 << " bottles of pop on the wall.\n\n";
  }


/*
99 bottles of pop on the wall.
Take one down and pass it around.
98 bottles of pop on the wall.

98 bottles of pop on the wall.
Take one down and pass it around.
97 bottles of pop on the wall.

97 bottles of pop on the wall.
Take one down and pass it around.
96 bottles of pop on the wall.


...........
24 hours later...


3 bottles of pop on the wall.
Take one down and pass it around.
2 bottles of pop on the wall.

2 bottles of pop on the wall.
Take one down and pass it around.
1 bottles of pop on the wall.

1 bottles of pop on the wall.
Take one down and pass it around.
0 bottles of pop on the wall.
*/
  