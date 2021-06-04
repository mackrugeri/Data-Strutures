#include <iostream>
using namespace std;


int GCD(int n1, int n2)
{
	if (n2 == 0)
	{
		return n1;
	}
	return GCD(n2, n1%n2);
}

int main ()
{
	int n1 = 0;
	int n2 = 0;
	cout << "Enter the value of n1 " << endl;
	cin >> n1 ;
	cout << "Enter the value of n2 " << endl;
	cin >> n2;
	system("clear");
	cout <<  "THe Greatest Common Divsor is " << GCD(n1,n2) << endl;

}