#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Cola");
  grocery.push_back("Chocolate");
  grocery.push_back("Ice cream");

  std::cout << grocery.size() << "\n";
  

/*
6
*/