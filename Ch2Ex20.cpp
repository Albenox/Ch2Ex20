/*
    Program File Name: Ch2Ex20.cpp
    Programmer: Gabriel Inocentes
    Date: February 9, 2024
    Requirements:
    Display approximately how many gallons of paint will be needed to paint two coats on a wooden fence
*/

#include <iostream>
using namespace std;

int const paintCoverage = 340;

int main()
{
    int height;
    int length;

    cout << "How tall is the fence in feet?" << endl;
    cin >> height;

    cout << "How long is the fence in feet?" << endl;
    cin >> length;
    
    int paintCans = (height * length * 2) / paintCoverage;
    cout << "You will need approximately " << paintCans << " paint cans to cover " << height * length << " square feet of fence with two layers.";
}
    