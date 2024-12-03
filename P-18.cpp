/*Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.*/


#include<iostream>

using namespace std;

class Calculator
{
    int a, b;
public:

	void result() 
	{
		cout << "Enter First Number : "; 
		cin >> a;
		cout << "Enter Second Number : "; 
		cin >> b;
	}

	int add() 
	{
		return a + b;
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
	Calculator c; 
	cout << "1. Addition" << "\n2. Subtraction" << "\n3. Multiplication" << "\n4. Division" << "\n0. Exit";
		
		
	do
	{
		cout << "\nEnter Choice : ";
		cin >> ch;
		if (ch==0)
		{
			cout << " Program Terminated ";
			break;
		}
		
		switch (ch)
		{
		case 1:
			c.result();	 
			cout << "Result : " << c.add() << endl; 
			break;
		case 2:
			c.result();
			cout << "Result : " <<c.sub() << endl; 
			break;
		case 3:
			c.result();
			cout << "Result : " << c.mul() << endl; 
			break;
		case 4:
			c.result();
			cout << "Result : " << c.div() << endl; 
			break;
		default:
			cout << "WRONG INPUT! ";
		}
		
	} while (ch >= 1 && ch <= 4);
	
	return 0;
}