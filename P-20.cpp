/*Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.*/


#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string _name, int _age)
    {
        name= _name;
        age = _age;
    }

    void display()
    {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person
{
private:
    string school;

public:
    Student(string _name, int _age, string _school) : Person(_name, _age), school(_school) 
    {
        _name=_name;
        _age=_age;
        school = _school;
    }

    void display()
    {
        Person::display();
        cout << "School: " << school << endl;
    }
};

class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(string _name, int _age, string _subject) : Person(_name, _age), subject(_subject)
    {
        _name=_name;
        _age = _age;
        subject=_subject;
    }

    void display()
    {
        Person::display();
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student student("Divyesh", 21, "TOPS");
    Teacher teacher("JAYDEEP", 35, "DBMS");

    cout << "Student Information:" << endl;
    student.display();
    cout << endl;

    cout << "Teacher Information:" << endl;
    teacher.display();

    return 0;
}