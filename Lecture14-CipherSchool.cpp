#include<iostream>
using namespace std;

//void printStuff() // there are no parameters present here 
//{
//	cout<<"Writing the first function";
//}


int sum(int a, int b)
{
	int c;
	c = a+b;
	return c;
}

int main()
{
	int a,b;
	a = 5;
	b = 6;
	sum(a,b); // calling the function
	printStuff(); // here we are calling the function which we created it 
	
	return 0;
}
