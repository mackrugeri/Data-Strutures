#include <iostream>
using namespace std;



int Factorial(int value)
{
	if (value == 1)
	{
		return 1;
	}
	else
	{
		return  value * Factorial(value-1);
	}
}

int main (){
	int value =0;
	cout << "Enter the value " << endl;
	cin >> value; 

	cout <<"The Factorial of " << value << " is " <<  Factorial(value) << endl;
}