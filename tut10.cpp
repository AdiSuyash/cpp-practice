// Loops in C++

/* There are three types of loops in C++ :
1. For Loop
2. While Loop
3. Do-While Loop */

#include <iostream>
using namespace std;

// For an Infinte Loop to RUN, we use always True Condition (eg. )

int main()
{
    int num;
    /*
    1. Syntax for 'For Loop' ->

    for(initialisation, condition, updation)
    {
        Loop Body( C++ Code )
    }
    */
    cout << "For Loop Code 1-10" << endl;
    for (int num = 1; num <= 10; num++)
    {
        /* Numbers ( 1-10 ) */
        cout << num << endl;
    }
    cout << endl;

    /*
    2. Synatx for 'While Loop' ->
    while(condition)
    {
        Loop Body( C++ Code )
    }
    */
    cout << "While Loop Code 1-20" << endl;
    int i = 1;
    while (i <= 20)
    {
        cout << i << endl;
        i++;
    }
    cout << endl;

    /*
    2. Synatx for 'Do-While Loop' ->
    do
    {
        Loop Body
    } while ( Condition );
    */
    cout << "Do-While Loop Code 1-50" << endl;
    int ij = 1;

    do
    {
        cout << ij << endl;
        ij++;
    } while (ij <= 50);
    cout << endl;

    // Program to print Table of 6
    cout << "Program Displaying Table of 6 :" << endl;
    cout << endl;

    int num1 = 1;
    do
    {
        cout << "6 x " << num1 << " = " << num1 * 6 << endl;
        num1++;
    } while (num1 <= 10);
    cout << endl;

    return 0;
}