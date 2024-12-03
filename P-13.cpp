/*Write a C++ program that calculates the factorial of a number using recursion*/

#include<iostream>

using namespace std;

//make a functione
 int fact (int number ) 

 {
    if (number > 1)       
    {
        number = number * fact (number - 1);
    }
    else 
    {
        return 1;
    }
    
}

int main () {

    int number ;

    cout<<"Enter number : ";
    cin >> number;

    cout<<"Factorial is : " << fact(number);

    return 0;
}