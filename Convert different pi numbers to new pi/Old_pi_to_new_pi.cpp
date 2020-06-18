#include <iostream>

using namespace std;

int main(){
    // Number used as diameter
    double diamiter = 10;

    // Radius variable
    double radius = diamiter / 2;

    // Stating of input request
    cout << "input variation of pi you wand to preform the calculation on:" << endl;

    // Input var deceleration
    double pi;

    // Input usage
    cin >> pi;

    // Calculation
    double cal1  = ((radius * radius)* pi) / 100;

    // Display result
    cout << "The new pi is: " + to_string(cal1) << endl;
    cout << "Thank you for using Seiling old pi to new pi converter." << endl;
    return 0;
}