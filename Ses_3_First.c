/* 
	Write a c program to add,subtract and multiplication 2 numbers.
	This is my first practicle of sesson 3 
*/

#include<stdio.h>
int main()
{
	
	int num1 = 70,num2 = 30; //two int main variable 
	int ans; // create a temporary int variable 
	
	ans = num1+num2; //Addition
	printf("Addition = %d",ans); //this printf function used to Print statement on output screen
	
	ans = num1-num2; //Subtraction
	printf("\n\nSubtraction = %d",ans);
	
	ans = num1*num2; //Multiplication
	printf("\n\nMultiplication = %d",ans);
	
}
