// Write a C++ program that accepts an array of integers, calculates the sum and
// average, and displays the results.

#include<iostream>
using namespace std;

class ArrayOperation
{
    int n;
    int arr[100];
    int sum;

public:
    // Constructor
    ArrayOperation(int size)
    {
        n = size;
        sum = 0;
    }

    void getData()
    {
        cout << "Enter " << n << " Numbers:" << endl;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
    }

    void display()
    {
        float avg = (float)sum / n;

        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Elements: ";
    cin >> n;

    ArrayOperation ao(n); 

    ao.getData();
    ao.display();

}





// #include<iostream>
// using namespace std;

// int main()
// {
// 	int n;
	
// 	cout << "Enter your Number :" << endl;
// 	cin >> n;
	
// 	int arr[n];
// 	int sum=0;
	
// 	cout << "Enter " << n << " Number :" << endl;
// 	for(int i=0;i<=n;i++)
// 	{
// 		cin >> arr[i];
//         sum += arr[i];
// 	}
	
// 	float ave = (float)sum / n;

//     // Results display
//     cout << "Sum = " << sum << endl;
//     cout << "Average = " << ave << endl;
// }
