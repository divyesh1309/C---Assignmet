/*Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).*/

#include<iostream>
#include<string.h>

using namespace std;

void palin(char *str1)
{
    int length,palin=1;
    char revstr[50];
    strcpy(revstr,str1);
    strrev(revstr);
    for (int i = 0; str1[i]!='\0'; i++)
    {
        if(str1[i]!=revstr[i])
        {
            palin=0;
        }
    }

        if(palin==1)
        {
            std::cout << "\nThis string is Palindrome";
        }
        else
        {
            std::cout << "\nThis String is not Palindrome";
        }
}

int main()
{

     char str[50];
     std::cout << "Enter string : ";
     std::cin >> str;
     palin(str);


    return 0;

}