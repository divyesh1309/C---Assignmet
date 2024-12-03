/*Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results*/

#include<iostream>

using namespace std;
int main()
{
    int sum = 0,ave = 0;
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter number : " << i+1 <<":";
        cin >> num[i];
        sum = sum + num[i];
    }
    ave=sum/5;

    cout << "sum of 5 number : "<< sum << endl;
    cout << " Average of 5 number : " << ave << endl;
        


    return 0;
}