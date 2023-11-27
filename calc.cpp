// calc is a super simple calculator app

#include<iostream>
#include<string>
using namespace std;

    float a;
    float b;
    float result;
    char z;


int addition ()

{
  result = a + b;					//actual calculation
  
  cout << result << "\n";				//output to user
  return 0;
}


int subtract ()
{
  result = a - b;					//actual calculation
  
  cout << result << "\n";				//output to user
  return 0;
}


int multiply ()
{
  result = a * b;					//actual calculation
  
  cout << result << "\n";				//output to user
  return 0;
}


int divide ()
{
  result = a / b;					//actual calculation
  
  cout << result << "\n";				//output to user
  return 0;
}



int main ()

{
    cout << "A super simple calculator app\n" ;
    cout << "Enter digit(s) and a symbol then next digit(s) to calculate\n" ;
    cout << "symbols are + to add, - to subtract, * to multiply and / to divide\n" ;
    cout << "Enter now..\n" ;
 
    cin >> a >> z >> b;
    //cout << z;
    if (z == '+')
    {
	//cout << "addition\n";
	addition();
    }
    
    if (z == '-')
    {
	//cout << "subtract\n";
	subtract();
    }
    
    if (z == '*')
    {
	//cout << "multiply\n";
	multiply();
    }
    
    if (z == '/')
    {
	//cout << "divide\n";
	divide();
    }
    
    return 0;
}   
