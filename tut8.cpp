// Constants, Manipulators & Operator Precedence

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 30;
    cout << "Initial value of a is " << a << endl;
    a = 40;
    cout << "New value of a is " << a << endl;
    // In above program, 'a' is not fixed, we change its value

    // Constants in C++

    // If we use 'const' before the Data Type of variable to fix its value as below...
    const int b = 50;
    cout << "Fixed value of b is " << b << endl;
    cout << endl;

    // Now we will try to assign the value of Fixed variable b
    // b=10; // It will give error because 'b' has a Fixed Value i.e 50 (Remove '//' before 'b=10;' to avoid error !! )

    // Manipulators

    // endl; --> End of Line
    // setw() --> Set Width(_num_) and to Right Justify [It is a function which comes from <iomanip> Header File]

    int x = 100, y = 2000, z = 3000, w = 40000;

    // Without 'setw'
    cout << "The value of x is: " << x << endl;
    cout << "The value of y is: " << y << endl;
    cout << "The value of z is: " << z << endl;
    cout << "The value of w is: " << w << endl;

    // With 'setw'
    cout << "The value of x is: " << setw(6) << x << endl;
    cout << "The value of y is: " << setw(6) << y << endl;
    cout << "The value of z is: " << setw(6) << z << endl;
    cout << "The value of w is: " << setw(6) << w << endl;
    cout << endl;

    // Operator Precedence

    cout << "Operator Precedence & Associativity Example: " << endl;
    int m = 3, n = 5;
    int o = m * 2 + n; // int o = (m*2)+n;
    cout << "m=3, n=5, o=m*2+n;" << endl;
    cout << "o is " << o << endl;
    cout << endl;

    cout << "Check 'https://en.cppreference.com/w/cpp/language/operator_precedence' for Operator Precedence & Associativity" << endl;
    cout << endl;

    return 0;
}