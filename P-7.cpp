/*Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results.*/

#include<iostream>

using namespace std;


int main () {


    int a = 10, b = 15;

    // Arithmetic Operators
    cout << "Arithmetic Operators : " << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    //Increment / Decrement Operator 
    //a++;
    cout << "\nIncrement / Decrement Operators : " << endl;
    cout << "a + + = " << ++a << endl;
    cout << "b - - = " << --b << endl;

    //Ternary Operator
    cout << "\nTernary Operators :" << endl;
    a > b ? cout <<"A is GT\n" : cout << "A is LT\n";


    // Relational Operators
    cout << "\nRelational Operators : " << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;


    // Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators : " << endl;
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;


    // Bitwise Operators
    int c = 6, d = 4; // 6 = 0110, 4 = 0100 in binary
    cout << "\nBitwise Operators : " << endl;
    cout << "c & d :  " << (c & d) << endl; // Bitwise AND
    cout << "c | d :  " << (c | d) << endl; // Bitwise OR
    cout << "c ^ d :  " << (c ^ d) << endl; // Bitwise XOR
    cout << "~c : " << (~c) << endl;       // Bitwise NOT
    cout << "c << 1 : " << (c << 1) << endl; // Left shift
    cout << "c >> 1 : " << (c >> 1) << endl; // Right shift

    return 0;
}