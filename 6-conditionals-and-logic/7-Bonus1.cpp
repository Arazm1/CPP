/*1.
Optional: Little Mac is an interplanetary space boxer, 
who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.
Here is the table of conversion:

#	Planet	Relative Gravity
1	Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19 */



#include <iostream>

int main() {

  double weight;
  int planet;

  std::cout << "Enter your weight on Earth: \n";
  std::cin >> weight;

  std::cout << "Enter a number for the planet you wish to travel to: \n";
  std::cin >> planet;

  switch(planet) {
    case 1 :
      weight = weight * 0.38;
      std::cout << "You weight is " << weight << "\n";
      break;
    case 2 :
      weight = weight * 0.91;
      std::cout << "You weight is " << weight << "\n";
      break;
    case 3 :
      weight = weight * 0.38;
      std::cout << "You weight is " << weight << "\n";
      break;
    case 4 :
      weight = weight * 2.34;
      std::cout << "You weight is " << weight << "\n";
      break;
    case 5 :
      weight = weight * 1.06;
      std::cout << "You weight is " << weight << "\n";
      break;
    case 6 :
      weight = weight * 0.92;
      std::cout << "You weight is " << weight << "\n";
      break;
    case 7 :
      weight = weight * 1.19;
      std::cout << "You weight is " << weight << "\n";
      break;
    default:
      std::cout << "Incorrect planet number\n";
      break;
  }
}
//Input 80
//input 7
//Your weight is 95.2