#include <iostream>
using namespace std;


int GCD(int n1, int n2)
{
	if (n2 == 0)
	{
		reuturn n1;
	}
	retrun GCD(n2, n1%n2);
}

int main ()
{
	cout << "Enter the value of n1 " << endl;
	cin >> n1 ;
	cout << "Enter the value of n2 " << endl;
	cin >> n2;

	cout <<  "THe Greatest Common Divsor is " << GCD(n1,n2) << endl;

}