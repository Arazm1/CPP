#include <iostream>

int main() {
  //Declaring a var named dog_age:
  int dog_age = 6;

  int early_years;
  int later_years;
  int human_years;

  //Giving dog the early years (in human this is 2y)
  early_years = 21;
  //Calculating later years (but - early years!)
  later_years = (dog_age - 2) * 4;

  //Storing them, (we counting their years in human)
  human_years = early_years + later_years;

  std::cout << "My name is ____! Ruff ruff, I am " << human_years << " years old in human years.";
  
}
//"My name is ____! Ruff ruff, I am 37 years old in human years."