/*Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions.*/

#include<iostream>

using namespace std;


int main () {

    int mark;

    cout<<"Enter your mark : ";
    cin >> mark;
    
    if (mark >= 90 && mark <= 100)
    {
        cout<<"Grade - A";
    }
    else if (mark >= 80 && mark < 90)
    {
        cout<<"Grade - B";
    }
    else if (mark >= 70 && mark < 80)
    {
        cout<<"Grade - C";
    }
    else if (mark >= 60 && mark < 70)
    {
        cout<<"Grade - D";
    }
    else if (mark >= 50 && mark < 60)
    {
        cout<<"Grade - E";
    }
    else if (mark >= 40 && mark < 50)
    {
        cout<<"Grade - F";
    }
    else                    
    {
        cout<<"Grade - G";    //for ( >= 10 && < 40 )
    }

    return 0;
}