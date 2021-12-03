/* 
 paul cabrera 
  ADT : Two Dimensional vector */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void menu(int&,char&);
void returnmenu(char&,int&);
void addition(int&,char&);
void substract(int&,char&);
void multiply(int&,char&);
void multiple(int&,char&);
void magnitude(int&,char&);


const int size=2;

 struct VECTOR {
 	double x[size];
 	double y[size];
 	
 };



int main(int argc, char** argv) {
	
	int option=0;
	char answer;
	menu(option,answer);
	return 0;
}

void menu(int&option,char&answer)
{
	do {
		cout << endl;	
		cout << "OPERATIONS WITH TWO-DIMENSONAL VECTORS" << endl;
		cout << "\n1) ADD VECTORS" <<endl;
		cout << "2) SUBSTRACT VECTORS" << endl;
		cout << "3) SCALAR MULTIPLE"  << endl;
		cout << "4) SCALAR PRODUCT" << endl;
		cout << "5) MAGNITUDE" << endl;
		cout << "6) EXIT" << endl; 
		 cout << "OPTION #"; 
		 cin >> option;
		 
		 switch(option)
		 {
		 	case 1: addition(option,answer);
		 	case 2: substract(option,answer);
		 	case 3 : multiple(option,answer); 
		 	case 4: multiply(option,answer);
		 	case 5: magnitude(option,answer);
		 }
		 
	} while (option!=6);
}

void returnmenu(char&answer,int&option)
{
	 cout << "Would you like to return back to the menu [Y/N] ? ";
	cin >> answer;
	 
	if (answer=='Y' or answer=='y')
	{
		menu(option,answer);
		 cout << endl;
	} else 
	 exit(0);
}


void addition(int&option,char&answer)
{

	struct VECTOR hello;
	double result1, result2;
	int p=1;
	
	cout << "Enter numbers for vector #" << p << endl;
	for (int i=0;i<2;i++)
	{
 		cin >>hello.x[i]; 
 	}
 	p++;
		cout << "Enter numbers for vector #" << p << endl;
	for (int i=0;i<2;i++)
	{
 		cin >>hello.y[i];
 	}
	
 	
	result1 = hello.x[0] + hello.y[0];
  	result2 =  hello.x[1] + hello.y[1];
   
   
 		cout << "ANSWER FOR VECTOR " << "(" << hello.x[0] << 
	 "," << hello.x[1] << ")" << "," <<"(" << hello.y[0] << "," << hello.y[1] << ")" << " is " ; 
	 cout << "(" <<result1 << "," << result2 << ") ";

	 returnmenu(answer,option);
	}

void substract(int&option,char&answer)
{
		struct VECTOR hello;
		double result1, result2;
	int p=1;
	cout << "Enter numbers for vector #" << p << endl;
	for (int i=0;i<2;i++)
	{
 		cin >>hello.x[i]; 
 	}
 	
	p++;
		cout << "Enter numbers for vector #" << p << endl;
	for (int i=0;i<2;i++)
	{
 		cin >>hello.y[i];
 	}
 	
 	result1 = hello.x[0] - hello.y[0];
    result2 =  hello.x[1] - hello.y[1];
   	
	   cout << "ANSWER FOR VECTOR " << "(" << hello.x[0] << 
	 "," << hello.x[1] << ")" << "," <<"(" << hello.y[0] << "," << hello.y[1] << ")" << " is " ; 
	 cout << "(" <<result1 << "," << result2 << ") ";

	returnmenu(answer,option);
}

void multiply(int&option,char&answer)
{
	
	struct VECTOR hello;
	int p=1;
	double result1, result2;
	
	cout << "Enter numbers for vector #" << p << endl;
	for (int i=0;i<2;i++)
	{
 		cin >>hello.x[i]; 	 
 	}
 	p++;
		cout << "Enter numbers for vector #" << p << endl;
	for (int i=0;i<2;i++)
	{
 		cin >>hello.y[i];
 	}
	
	result1 = hello.x[0] * hello.y[0];
  	result2 =  hello.x[1] * hello.y[1];
   
  	cout << "ANSWER FOR VECTOR " << "(" << hello.x[0] << 
	 "," << hello.x[1] << ")" << "," <<"(" << hello.y[0] << "," << hello.y[1] << ")" << " is " ; 
	 cout << "(" <<result1 + result2 << ") ";

	returnmenu(answer,option);
 	   
}

void multiple(int&option,char&answer)
{
	struct VECTOR hello;
	int p=1;
	cout << "Enter scalar " << endl;
	for (int i=0;i<1;i++)
	{
 		cin >>hello.x[i]; 
 		 
 	}
 	
	cout << "Enter numbers for vector #" << p << endl;
	for (int i=0;i<2;i++)
	{
 		cin >>hello.y[i];
 	}
 	
	double result1, result2;
 	 result1 = hello.x[0] * hello.y[0];
  result2 =  hello.x[0] * hello.y[1];
   
   
 	cout << "ANSWER FOR VECTOR " << "(" << hello.x[0] << 
	  ")" << "," <<"(" << hello.y[0] << "," << hello.y[1] << ")" << " is " ; 
	 cout << "(" <<result1 + result2 << ") ";
	
	returnmenu(answer,option);	   
}

void magnitude(int&option,char&answer)
{
	struct VECTOR hello;
	double result1;
	int p=1;
		
		cout << "Enter number for vector #" << p << endl;
	for (int i=0;i<2;i++)
	{
 		cin >>hello.y[i];
 	}

	result1 = pow((pow(hello.y[0],2) * pow(hello.y[1],2)),0.5); 
   
 	cout << "ANSWER FOR VECTOR VECTOR 1" << "(" << hello.y[0] << 
	 "," << hello.y[1] << ")" << " is " ; 
	 cout << "(" <<result1 << ") ";

	 returnmenu(answer,option);
}




