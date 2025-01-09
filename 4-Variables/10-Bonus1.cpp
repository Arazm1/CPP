//Create a program that takes in the weight of an item and 
//then calculates how much that item would weigh on Mars.

#include <iostream>


int main() {
  double itemweight;
  double marsweight;
  
  std::cout << "Give the weight of an item: ";
  std::cin >> itemweight;

  marsweight = itemweight / 3;

  std::cout << "This would weight " << marsweight << " on Mars.\n";
}
//Input: 9
//This would weight 3 on Mars.