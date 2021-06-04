#include <iostream>
using namespace std;


int main()
{
	int value;
	int i=2;
	int flag = 1;
	cout<<"Enter value "<<endl;
	cin>> value;

	while(i < value)
	{
		if(value % i == 0)
		{
			flag =0;
			
		}
		i++;

	}
	if (flag == 1)
	{
		cout << "It is a Prime Number" << endl;
	}
	else
	{
		cout << "It is not a Prime Number" << endl;
	}
}