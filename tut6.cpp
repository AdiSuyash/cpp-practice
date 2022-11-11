// Header Files & Operator Types

/* There are two types of header files:
1. System header files: It comes with the compiler, eg. #include<iostream>
2. User defined header files: It is written by the programmer, eg. #include "this.h" --> This will produce an error if this.h is no present in the current directory */

#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl;

    // Assignment Operators --> used to assign values to variables
    cout << "Following are the types of Arithmetic Operators in C++" << endl;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; // First value of 'a' is printed, then increased by 1
    cout << "The value of a-- is " << a-- << endl; // First value of 'a' is printed, then decreased by 1
    cout << "The value of ++a is " << ++a << endl; // First value of 'a' is increased by 1, then printed
    cout << "The value of --a is " << --a << endl; // First value of 'a' is decreased by 1, then printed
    cout << endl;

    // int a =4, b=5;
    // char d='d';

    // Comparison operators --> used to compare values of variables
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << endl;

    // Logical operators --> used to logically check values of variables
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;
    cout << endl;

    return 0;
}