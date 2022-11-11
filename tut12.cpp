// Pointers in C++

#include<iostream>
using namespace std;

// 'A Pointer is a Data Type' which holds the address of other Data Types

int main()
{
    int a=3;
    int* b= &a;  // 'int* b' is a pointer variable which stores the address of 'a' i.e. '&a'

    // '&' --> Address off Operator
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of b is "<<b<<endl;

    // '*' --> Dereference Operator (Shows Value)
    cout<<"The vaule at Address b is "<<*b<<endl;
    
    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
    
}