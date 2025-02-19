/*
Optional: Let’s try a challenging problem that will put all your brain cells to the test.

Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.
Take some time to research and brainstorm before starting to write the code! */


#include <iostream>

int main() {

    int year;

    std::cout << "Enter a year: \n";
    std::cin >> year;

    

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        std::cout << "Leap year!!\n";
    } else {
        std::cout << "Not a leap year!\n"
    }
}
//Enter year: 2008
//Leap year!!

