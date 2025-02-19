#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  
  std::vector<int> multiples{num, num * 2, num * 3};
  
  return multiples;
  
}


int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
/*
Output:
8
16
24
*/