/*Create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private.*/


#include<iostream>

using namespace std;

class BankAccount
{
private:
string depositor;
int acc_num;
string acc_type;
int balance;

public:

	BankAccount() 
	{
        depositor="Divyesh";
        acc_num=130927;
        acc_type="saving";
        balance=8000;
		// std::cout << "Enter Depositor name : "; 
		// std::cin >> depositor;
		// std::cout << "Enter Account number : "; 
		// std::cin >> acc_num;
        // std::cout << "Enter Type of account : ";
        // std::cin >> acc_type;
        // std::cout << " Enter amount :";
        // std::cin >> balance;
	}

    void add_bal()
    {
        int add;
        cout << "Enter amount to deposit : ";
        cin >>add;

        balance=balance+add;
        cout << "Amount Deposited\n";
    }
    void withdraw()
    {
        int withdraw;
        cout << "Enter amount to withdraw : ";
        cin >> withdraw;

        balance=balance-withdraw;
        cout << "Amount Deposited\n";
    }
    void showcustomer()
    {

        cout << " \nDepositor name : " << depositor << endl;
        
        cout << " Acount  type : " << acc_type  << endl;
        cout << " Total balance  : " << balance << endl;
    }
};
	

int main() 
{
	BankAccount b;
   
    do
    {
        int choice;
        std::cout << "\n1. Deposite amount :" << endl;
        std::cout << "2. WITHDRAW amount :" << endl;
        std::cout << "3. SHOW BALANCE :" << endl;
        std::cout << "4. EXIT :" << endl;

        std::cout << "ENTER YOUR CHOICE : ";
        std::cin >> choice;
        if (choice==4)
        {
            std::cout << "VISIT AGAIN";
            break;
        }
        switch (choice)
        {
        case 1:
            b.add_bal();
            break;
        case 2:
            b.withdraw();
            break;
        case 3:
            b.showcustomer();
            break;
        default:
            std::cout << "INVALID INPUT !";
            break;
        }


    } while (1);
    
	return 0;
}