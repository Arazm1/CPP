#include <iostream>
#include <vector>
  
int main() {

  /*Remember to make sure youre defining both variables and how much they are at the beginning already coz otherwise it made them string*/
  int even_numbers = 0;
  int odd_numbers = 1;
  std::vector<int> vector = {2, 4, 3, 6, 1, 9};


 for (int i = 0; i < vector.size(); i++) {
  if (vector[i] % 2 == 0) {
    even_numbers = even_numbers + vector[i];
  } else {
    odd_numbers = odd_numbers * vector[i];
  }
 } 

std::cout << "Sum of even numbers is " << even_numbers << "\n";
std::cout << "Product of odd numbers is " << odd_numbers << "\n";


}

/*
Sum of even numbers is 12
Product of odd numbers is 27
*/