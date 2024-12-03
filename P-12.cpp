/*Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input.*/

#include<iostream>

using namespace std;

class calculator
{
    int a,b;
    public:

    void result()
    {
        cout << " Enter the  first value :";
        cin >> a ;

        cout << " Enter the second value :";
        cin >> b ;
    }

    int add()
    {
        return  a + b;
    }
    int sub()
    {
        return a - b;
    }
    int mul()
    {
        return a * b;
    }
    int div()
    {
        return a / b;
    }
};
int main()
{
    int ch;
    calculator c;

    cout << "1. Addition" << 
			"\n2. Subtraction" << 
			"\n3. Multiplication" << 
			"\n4. Division" << 
			"\n0. Exit";
    
    do
    {
        cout << " Enter choice : ";
        cin >> ch;
        if (ch == 0)
        {
            cout << " Program is terminated!";
            break;        
        }
    

        switch (ch)
        {
            case 1:
                c.result();
                cout << " result : " << c.add() << endl;
                break;
            case 2:
                c.result();
                cout << " result : " << c.sub() << endl;
                break;
            case 3:
                c.result();
                cout << " result: " << c.mul() << endl;
                break;
            case 4:
                c.result();
                cout << " result : " << c.div() << endl;
                break;
            default:
                cout << " invaild input!";
                break;
        }
        
    }while(ch >=1 && ch <= 4);
    
    return 0;
}