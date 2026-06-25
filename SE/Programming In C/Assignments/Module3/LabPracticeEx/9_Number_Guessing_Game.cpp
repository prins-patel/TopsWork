// Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.


//with constructor and random number 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class GuessGame
{
    int randomNumber;

public:
    // Constructor
    GuessGame()
    {
        srand(time(0));
        randomNumber = rand() % 100 + 1; // 1 to 100 numbe print
    }

    void play()
    {
        int guess;

        cout << "Guess a number between 1 and 100" << endl;

        do
        {
            cout << "Enter Your Guess: ";
            cin >> guess;

            if(guess > randomNumber)
            {
                cout << "Value is High" << endl;
            }
            else if(guess < randomNumber)
            {
                cout << "Value is Low" << endl;
            }
            else
            {
                cout << "Congratulations! You Guessed Correctly." << endl;
            }

        } while(guess != randomNumber);
    }
};

int main()
{
    GuessGame g;   // Constructor call
    g.play();
}





// #include<iostream>
// using namespace std;

// int main()
// {
//  	int guess=55;
 	
 	
 	
//  	cout << "Enter Your Guess Number :" << endl;
//  	do{
	 
// 	 cin >> guess;
	 
// 	 if(guess >55)
// 	 {
// 	 	cout << " Value is High " << endl;
// 		 }	
// 	 else if(guess < 55)
// 	 {
// 	 	cout << "Value is Low " << endl;
// 		  }	 
// 	else
// 	{
// 		cout << "Congratulation You Guess Currect" << endl;
// 		  }	  
		  
// }while(guess != 55);
// }