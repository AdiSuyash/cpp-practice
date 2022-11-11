// Addition of 2 Numbers

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter the value of number 1:\n"; // '<<' is called Insertion Operator
    cin >> num1;                              //'>>' is called Extraction Operator

    cout << "Enter the value of number 2:\n"; //'<<' is called Insertion Operator
    cin >> num2;                              //'>>' is called Extraction Operator

    cout << "The Sum is: " << num1 + num2;
    return 0;
}