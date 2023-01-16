#include<iostream>
using namespace std;
int main()
{
	double temp;
	char unit;
	
	cout<<"**************Temperature conversion*****************\n";
	cout<<"F= Fahrenheit \n";
	cout<<"c= celsius\n";
	cout<<"what unit whould you like to convert to :";
	cin>>unit;
	if(unit=='F'|| unit=='f')
	{
		cout <<"Enter the temperature in celsious : ";
		cin>>temp;
		
		temp=(1.8*temp)+32.0;
		cout<<"Temperature is "<<temp<<" F \n";
	}
	else if(unit=='C'||unit=='c')
	{
		cout <<"Enter the temperature in Fahtenheit : ";
		cin>>temp;
		
		temp=(temp-32)/1.8;
		cout<<"Temperature is "<<temp<<" C \n";	
	}
	else
	{
		cout<<"plase enter in only C and F \n";
	}
	cout<<"*******************************************";
	return 0;
}
