//8 Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions.

//With Constructor

#include<iostream>
using namespace std;

class Grade
{
    int marks;

public:
    // Constructor
    Grade(int m)
    {
        marks = m;
    }

    void displayGrade()
    {
        if(marks >= 90)
        {
            cout << "Grade : A" << endl;
        }
        else if(marks >= 80)
        {
            cout << "Grade : B" << endl;
        }
        else if(marks >= 70)
        {
            cout << "Grade : C" << endl;
        }
        else if(marks >= 60)
        {
            cout << "Grade : D" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
};

int main()
{
    int marks;

    cout << "Enter Subject Marks : ";
    cin >> marks;

    Grade g(marks);   // Constructor call
    g.displayGrade();

}





// #include<iostream>
// using namespace std;
// int main()
// {
// 	int marks;
	
// 	cout << "Enter 1 Subject Marks :" << endl;
// 	cin >> marks;
	
// 	if(marks >= 90)
// 	{
// 		cout << "Grade : A" << endl; 
// 	}
// 	else if(marks >= 80 )
// 	{
// 		cout << "Grade : B" << endl;
// 	}
// 	else if(marks >= 70)
// 	{
// 		cout << "Grade : C" << endl;
// 	}
// 	else if(marks >= 60)
// 	{
// 		cout << "Grade : D" << endl;
// 	}

// 	else{
// 		cout << "Fail" << endl;
// 	}
	
	
// }
