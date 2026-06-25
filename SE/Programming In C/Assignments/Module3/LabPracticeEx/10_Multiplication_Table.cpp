// Write a C++ program to display the multiplication table of a given number using a for
// loop

// with constructor
#include<iostream>
using namespace std;

class Table
{
    int n;

public:
    // Constructor
    Table(int num)
    {
        n = num;
    }

    void displayTable()
    {
        for(int i = 1; i <= 10; i++)
        {
            cout << n << " x " << i << " = " << n * i << endl;
        }
    }
};

int main()
{
    int num;

    cout << "Enter Your Number: ";
    cin >> num;

    Table t(num);   // Constructor call
    t.displayTable();

    
}



// #include<iostream>
// using namespace std;

// int main()
// {
// 	int n,result;
	
// 	cout << " Enter Your Number " << endl;
// 	cin >> n;
	
// 	for(int i=1;i<=10;i++)
// 	{
// 		result = n * i;
// 		cout << n << "X" << i << " = " << result << endl;
// 	}
	
// }
