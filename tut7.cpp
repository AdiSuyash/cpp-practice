// C++ Reference Variables & Typecasting

#include <iostream>
using namespace std;

// *************Build in Data types****************

int c = 45; // Global Variable (c=45)

int main()
{

    cout << "*************Build in Data types****************" << endl;

    int a, b, c;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b; // Local Variable (c=a+b)
    
    cout << "The sum is " << c << endl;
    cout << "The global c is " << ::c << endl; // '::' is Scope Resolution Operator which is used to Use Global Variable

    // ************* Float, double and long double Literals****************
    cout << "************* Float, double and long double Literals****************" << endl;

    float d = 34.4F;
    long double e = 34.4L;
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    cout << "The value of d is " << d << endl
         << "The value of e is " << e;

    // *************Reference Variables****************
    cout << "*************Reference Variables****************" << endl;
    /* Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    Similarly the Reference Variable works the same */
    float x = 455;
    float &y = x; // '&' is Ampersand Operator, used to Reference Variables
    cout << x << endl;
    cout << y << endl;

    // *************Typecasting****************
    cout << "*************Typecasting****************" << endl;
    int m = 45;
    float n = 45.46;
    cout << "The value of m is " << (float)m << endl;
    cout << "The value of m is " << float(m) << endl;

    cout << "The value of n is " << (int)n << endl;
    cout << "The value of n is " << int(n) << endl;
    int p = int(n);

    cout << "The expression is " << m + n << endl;
    cout << "The expression is " << m + int(n) << endl;
    cout << "The expression is " << m + (int)n << endl;

    return 0;
}