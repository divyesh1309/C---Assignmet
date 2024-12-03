/*Write a C++ program to perform matrix addition on two 2x2 matrices.*/

#include<iostream>

using namespace std;

    int mat1[2][2];
    int mat2[2][2];
    int mat3[2][2];

void inputMat()
{

    std::cout << "\nMATRIX: 1\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << "Enter Element : ";
            std::cin >> mat1[i][j];
        }
    }
    std::cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            std::cout << "\t" <<mat1[i][j];
            if(j==1)
            {
                std::cout << endl;
            }
        }
    }  

    std::cout << "\nMATRIX: 2\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << "Enter Element : ";
            std::cin >> mat2[i][j];
        }
    }
    std::cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << "\t" <<mat2[i][j];
            if(j==1)
            {
                std::cout << endl;
            }
        }     
    } 
}
void addMat()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    std::cout << "\nAddition of Matrix\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
           std::cout << "\t" <<mat3[i][j];
            if(j==1)
            {
                std::cout << endl;
            }
        }
        
    }   
}

int main()
{
    inputMat();
    addMat();
    

    return 0;

}

