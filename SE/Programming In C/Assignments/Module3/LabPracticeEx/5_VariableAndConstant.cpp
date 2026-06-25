// 5 Write a C++ program that demonstrates the use of variables and constants. Create
// variables of different data types and perform operations on them


#include<iostream>
using namespace std;

class Demo
{
    // Constant
    const double PI = 3.14159;

    // Variables
    string name;
    int age;
    char grade;
    float height;

public:
    // Constructor
    Demo()
    {
        name = "Bhavya";
        age = 20;
        grade = 'A';
        height = 5.9;
    }

    void display()
    {
        // Operations
        age = age + 5;
        height = height + 0.5;

        cout << "Name : " << name << endl;
        cout << "Age after 5 years : " << age << endl;
        cout << "Grade : " << grade << endl;
        cout << "Height after 5 years : " << height << endl;

        double radius = 10;
        double area = PI * radius * radius;

        cout << "Circle Area with Radius "
             << radius << " = " << area << endl;
    }
};

int main()
{
    Demo d;  
    d.display();

}
