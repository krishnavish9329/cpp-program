#include<iostream>
using namespace std;
int main()
{
	char op;
	int number1;
	int number2;
	
	cout<<"*******Simpal Calculator**********\n";
	cout<< "Enter the oparetor ( + - / * )\n";
	cin>> op;
	
	cout<<"Enter the first number : ";
	cin>> number1;
	cout<< "Enter the seconde number :";
	cin>> number2;
	
	switch(op)
	{
		case '+': cout <<"sum of " << number1 <<" & "<<number2<<"is "<<(number1+number2)<<endl;
		          break;
		case '-': cout <<"subtraction of " << number1 <<" & "<<number2<<"is "<<(number1-number2)<<endl;
		          break;
	    case '/': cout <<"divition of " << number1 <<" & "<<number2<<"is "<<(number1/number2)<<endl;
		          break;
		case '*': cout <<"multiplication of " << number1 <<" & "<<number2<<"is "<<(number1*number2)<<endl;
		          break;
		default : cout<<"enter correct oparetor : ";
	}
	cout<<"***********************************************";
	return 0;
}
