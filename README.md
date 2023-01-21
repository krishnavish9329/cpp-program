# cpp-program And Nodes
_____________________________________________
<h3>What is C++?<h3>
C++ is a general purpose, case-sensitive, free-form programming language that supports object-oriented, procedural and generic programming.
C++ is a middle-level language, as it encapsulates both high and low level language features.
<br>____________________________________________<br>
Standard output stream (cout)
The cout is a predefined object of ostream class. It is connected with the standard output device, which is usually a display screen. The cout is used in conjunction with stream insertion operator (<<) to display the output on a console
Let's see the simple example of standard output stream (cout):

include <iostream>

using namespace std;  

int main( ) { 


   Int a=2;
   
   
   cout << "Value is: " << a << endl;
   
}  
<br>__________________________________________<br>
Standard input stream (cin)

The cin is a predefined object of istream class. It is connected with the standard input device, which is usually a keyboard. The cin is used in conjunction with stream extraction operator (>>) to read the input from a console.
Let's see the simple example of standard input stream (cin):

#include <iostream>  
using namespace std;  
int main( ) {  
  int age;  
   cout << "Enter your age: ";  
   cin >> age;  
   cout << "Your age is: " << age << endl;
  return 0;
}
#include<iostream>
using namespace std;  
int main()
{
    string name;
    int x;
    getline(cin,name);
    cout<<name;
    cin>>x;
    cout<<x;
}
<br>______________________________________________<br>
Standard end line (endl)

The endl is a predefined object of ostream class. It is used to insert a new line characters and flushes the stream.
Let's see the simple example of standard end line (endl):

#include <iostream>  
using namespace std;  
int main( ) {  
cout << "hello";     
cout << " I am learn c++"<<endl;   
cout << "End of line"<<endl;   
}   
<br>______________________________________________<br>
#  introduction of c++ 
Q1) why you need to learn c++.
Ans ) • c++ is fast language
          • advanced graphics apps
         • c++ is very using on video game 
         • embedded system
<br>_______________________________________________<br>
NORMAL CODE

#include <iostream>
int main() {
    std::cout << "Hello world!"<<std::endl;
    return 0;  //  if we return 1 so it's a problem.
}

Hear 
std::cout =stander character output
// = comment = comment is ignor by compiler 
  •ther are 2 type of comment
  1)single line comment [//]
  2)multi line comment [/*  */]
<br>====================<br>
# variables  and basic datatype 
Variables are containers for storing data values
C++ Variable
A variable is a name of memory location. It is used to store data. Its value can be changed and it can be reused many times.
It is a way to represent memory location through symbol so that it can be easily identified.
Data type 
a data type is a collection or grouping of data values, usually specified by a set of possible values, a set of allowed operations on these values, and/or a representation of these values as machine types.

#include <iostream>
int main() {
    int a=5; // declaration with assignment
    std::cout<<a<<std::endl;
    int y=6;
    int sum= a+y;
    std::cout<<sum<<'\n';
    //integer(whole number)
    int age =7.5; // the output is only 7 and .5 is trunck;
    //double (number including decimal)
    double price =10.99;
    //single character 
    char grade='A';
    //boolean (true or false)
    bool student =true;
    bool power= false;
    //string(object that represents a sequence of text)
    std:: string name ="bro";
    std::cout <<name;
    return 0;
}
==================
# const keyword 

C++ Keywords
A keyword is a reserved word. You cannot use it as a variable name, constant name etc. A list of 32 Keywords in C++ Language which are also available in C languages

•  the const keyword specifies that a variable value is constant. 
• tells the compiler to prevent anything from modifying it (read-only)
# include<iostream>
Int main(){
Const double PI= 3.14159;
//pi=77.3;//it creat error
doubled radius =10;
double circumstances =2*PI*radius;
Std::cout<<circumstances; 
Return 0;
}
===========
#NAMESPACE 
provides a solution for preventing name conflicts in large projects .each entity needs a unique name . a namespace allows for identically name entities.as long as the namespaces are different.


#include <iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main() {
    int x=0;
    std::cout <<x<<'\n';
    std::cout <<first::x<<'\n';
    std::cout <<second::x<<'\n';
  return 0;
}
Using namespace std we remove prefix (std::+cout) cout.
=============
#typedef/using
Reserved keyword used to creat an addition name (alias) for another data type.new identifier for an existing type helps with readability and reduces types.
Use when there is a clear benefit replaced with ''using''


#include <iostream>
using namespace std;
//typedef string text;
typedef int number;
using text=string;
int main() {
    text name ="bro";
    number x=8;
    cout <<x<<endl;
    cout <<name<<'\n';
    return 0;
}
========
Arithmetic operation
========
#type conversion (type casting)
 Conversion a value if data type to another 
1). Implicit = automatic 
2). Explicit = precede value with new data type

#include<iostream>
using namespace std;
int main()
{    int x=3.99;
    // int is not store decimal value so it auto matic change double data dype into int .it's call implicit type conversion.
    cout<<x<<endl;
    char xx=(int)100;
    //int is change into character it called Explicit type conversion
    cout<<xx;
    return 0;
}
============
# Using math related function 
1). max  = is return max value.
2). min = is return min value.
3). pow = is return some calculative value like 2^3=8 => pow(2,3); =8 and pow isbinclude in cmath header file
4). sart = is return some calculative value like 9= (3)^2= 3 => sart(9)=3
5). Abs(absolut value) = is return positive value. 
    Like abs(-5)= 5
6). Round(int x)= is return a value which close in that number and round function is take decimal value.like x=3.141;
                  Y= 3.941;
                 Z= round(x); = 3
                 Y= round(Y);= 4
7). Ceil (int x) =it is return roundup value 
       Like x= 3.13;
                Z=chid(x);= 4


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a=3;
    int b=4;
    double z;
    //z=max(a,b);
    //z=min(a,b);
    //z=pow(2,3);
    //z=sqrt(16);
    //z=abs(-2);
    //z=round(3.94991);
    z=ceil(4.39);
    cout<<z;
}
===========
 # Control statement  have 2 type 
1). Condition statement  [if , switch]
2). Looking [ for, while, do while]

 If statement 
Do something if a condition is true.
If a condition is false, then don't do it.
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age";
	cin>>age;
	if(age>=18)
	{cout<<"welcom to the site!";
	}
	else if(age < 0)
	{	cout<<"you haven't been born yet";
	}
	else
	{		cout<<"you are not enter ";
	}
}
------------------------------
Switch statement 
Alternative to using many "else if" statement 
Compare one value against matching case.

#include<iostream>
using namespace std;
int main()
{
	int month;
	cout<<"ENter the month(1-12):";
	cin>>month;
	switch(month)
	{
		case 1: cout<<"it is junuary";
		break;
		case 2: cout<<"it is february";
		break;
		case 3: cout<<"it is march";
		break;
		case 4: cout<<"it is April";
		break;
		case 5: cout<<"it is May";
		break;
		case 6: cout<<"it is June";
		break;
		case 7: cout<<"it is July";
		break;
		case 8: cout<<"it is August";
		break;
		case 9: cout<<"it is September";
		break;
		case 10: cout<<"it is October";
		break;
		case 11: cout<<"it is November";
		break;
		case 12: cout<<"it is december";
		break;
		default: cout<<"plase enter in only number (1-12)";
	}
}
==================
