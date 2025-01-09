//Create a program that asks for a distance in miles as input. 
//The program will then output how much that distance is in kilometers.

#include <iostream>


int main() {
    double miles;
    double kilometers;

    std::cout << "Enter a distance with miles: ";
    std::cin >> miles;

    kilometers = miles * 1.609344;

    std::cout << miles << " miles is " << kilometers << " km.\n";

}
//Input: 1
//1 miles is 1.609344 km.