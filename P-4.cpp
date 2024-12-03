/*Write a program that asks for two numbers and displays their sum. Ensure this is
done after setting up the IDE */

#include<iostream>

using namespace std;


int main () {

    float num1 , num2, sum;

    cout<<"Enter first number : ";
    cin >> num1;

    cout<<"Enter second number : ";
    cin >> num2;
    

    //calculate
    sum = num1 + num2;

    //output
    cout<<"sum is : "<<sum<<endl;

    return 0;
}