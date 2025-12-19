//This program is used to demonstrate variable declararion and data types in C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    // variable declaration
    int x, y, z; // integer variables (declaration)
    x = y = z = 5;
    cout << x + y + z << "\n"; 

    //alternative declaration
    int a = 10, b = 16, c = 25; // integer variables (declaration)
    cout << a + b - c << endl;
    
    //testing with different data types
    double cost = 99.5;
    double tax = 0.06;
    double finalCost = cost * (1 + tax);
    cout << "Final cost: " << finalCost << endl;

    string name = "Jia Hong";
    cout << name << " is learning C++ programming.";
    return 0;
}