/*Write a C++ program that performs both implicit and explicit type conversions and
prints the results.*/

#include<iostream>

using namespace std;

int main()
{
    int s1 = 20;
    float s2 = 12.20;

    cout << " This is explicity type : \n";
    cout << (int)s2 << endl;
    cout << (float)s1 <<endl;
      

    cout << "This implicit type : \n";
    int a = 'A';
    cout << a << endl;

    char num = 97;
    cout << num << endl;

    return 0;
}