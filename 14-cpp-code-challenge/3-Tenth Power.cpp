#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  num = pow(num, 10);
  return num;
}


int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}
//Basically num^n
/*
Output:
0
1
1024
*/