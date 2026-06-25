//4 Write a program that asks for two numbers and displays their sum. Ensure this is
// done after setting up the IDE (like Dev C++ or CodeBlocks)

#include<iostream>
using namespace std;

class Sum
{
public:
    Sum(int a, int b)
    {
        cout << "Sum is : " << a + b << endl;
    }
};

int main()
{
    int n1, n2;

    cout << "Enter Number 1 : ";
    cin >> n1;

    cout << "Enter Number 2 : ";
    cin >> n2;

    Sum s(n1, n2);
}