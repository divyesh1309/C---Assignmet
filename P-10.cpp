/*Write a C++ program to display the multiplication table of a given number using a for
loop*/

#include<iostream>

using namespace std;

int main () {

    int number;

    cout<<"Enter number : ";
    cin >> number;

    //print Multiplication table

    for (int i = 1; i < 10; i++)
    
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }   //This line is used to print a multiplication table or result 
    

    return 0;
}