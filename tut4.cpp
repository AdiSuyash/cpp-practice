// Data Types

#include <iostream>
using namespace std;

int global = 6;
void sum()
{
    int a;
    cout << global;
}

int main()
{
    int global = 9;
    global = 78;

    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;
    
    sum(); // Function 'void sum()' called here, output will be 6
    cout << endl;
    cout << global << "\n"
         << is_true << endl;
    cout << "This is tutorial 4.\nHere the value of a is " << a << ".\nThe value of b is " << b;
    cout << "\nThe value of pi is: " << pi;
    cout << "\nThe value of c is: " << c;
    cout << endl;

    return 0;
}