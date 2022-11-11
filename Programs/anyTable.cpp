//  Program to display Table of any Number

#include <iostream>
using namespace std;

int table;
int main()
{
    cout << "Enter number :" << endl;
    cin >> table;
    cout << "Displaying Table of " << table << endl;
    cout << endl;

    int num1 = 1; // Variable declaration with value 1-10
    do
    {
        cout << table << " x " << num1 << " = " << num1 * table << endl;
        num1++;
    } while (num1 <= 10);
    cout << endl;

    return 0;
}