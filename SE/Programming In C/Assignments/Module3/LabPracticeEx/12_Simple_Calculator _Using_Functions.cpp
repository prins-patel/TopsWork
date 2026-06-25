// Calculator Using Functions
// o Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.


// with constructor
#include<iostream>
using namespace std;

class Calculator
{
    int a, b;

public:
    // Constructor
    Calculator(int x, int y)
    {
        a = x;
        b = y;
    }

    int add()
    {
        return a + b;
    }

    int subtract()
    {
        return a - b;
    }

    int multiply()
    {
        return a * b;
    }

    float divide()
    {
        return (float)a / b;
    }
};

int main()
{
    int a, b;
    char ope;

    cout << "Enter Value 1: ";
    cin >> a;

    cout << "Enter Value 2: ";
    cin >> b;

    Calculator c(a, b);   // Constructor Call

    cout << "Choose Operator (+, -, *, /): ";
    cin >> ope;

    switch(ope)
    {
        case '+':
            cout << "Result: " << c.add() << endl;
            break;

        case '-':
            cout << "Result: " << c.subtract() << endl;
            break;

        case '*':
            cout << "Result: " << c.multiply() << endl;
            break;

        case '/':
            if(b == 0)
                cout << "Error: Division by Zero" << endl;
            else
                cout << "Result: " << c.divide() << endl;
            break;

        default:
            cout << "Invalid Operator" << endl;
    }
} 



// #include<iostream>
// using namespace std;

// int sum(int a,int b)
// {
// 	return a+b;
// }
// int sub(int a,int b)
// {
// 	return a-b;
// }
// int multi(int a,int b)
// {
// 	return a*b;
// }
// int divide(int a,int b)
// {
// 	return a/b;
// }

// int main(){
// 	int a , b;
// 	char ope;
	
// 	cout << "Enter Your Value 1 :" << endl;
// 	cin >> a;
// 	cout << "Enter Your Value 2 :" << endl;
// 	cin >> b;
// 	cout << "Choose Your Operator(+ , - , * , / ) " << endl;
// 	cin >> ope;
	
// 	switch(ope){
// 		case '+' :
// 			cout << "Result :" << sum(a,b) << endl;
// 			break;
// 		case '-' :
// 			cout << "Result :" << sub(a,b) << endl;
// 			break;
// 		case '*' :
// 			cout << "Result :" << multi(a,b) << endl;
// 			break;
// 		case '/' :
// 			if(b==0)
// 				cout << "Error: Division by zero" << endl;
// 			else
// 				cout << "Result :" << divide(a,b) << endl;
// 			break;
			
// 		default :
// 			cout << "Invalid Operator" << endl;	
// 	}
	
// }
