//POP vs. OOP Comparison Program 

/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.*/



// 1). using POP

// #include<stdio.h>

// int main () {

//     float area, lenght, width;

//     printf("Enter the length of rectangle : ");
//     scanf("%f", &lenght);

//     printf("Enter the width of rectangle : ");
//     scanf("%f", &width);


//     //calculate
//     area = lenght * width; 

//     //output
//     printf("Area of rectangle is : %.2f", area);

// }



// 2). using OOP

#include<iostream>

using namespace std;

//class
class Rectangle {

private: 

    float length, width;

 public:
       
        Rectangle(float l, float w)    // Constructor to initialize values
        {
            length = l;
            width = w;
        }

        float calculateArea()      // Method for calculate area
        {
            return length * width;
        }
};

int main() {

    float length, width;

    // Input 
    cout << "Enter the length of rectangle : ";
    cin >> length;
    cout << "Enter the width of rectangle : ";
    cin >> width;

    // Create an object of the Rectangle class
    Rectangle rect(length, width);

    //output
    cout << "The area of the rectangle is : " << rect.calculateArea() << endl;

    return 0;
}