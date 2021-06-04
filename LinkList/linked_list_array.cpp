#include <iostream>
#include <math.h>
using namespace std;

struct node
{
	int info;
	node *next;
};


int max_value()
{

	int min = 0;
	int max = 0;
	float div =0.0;
	int *array = new int[5];
	cout << "Enter the value" << endl;
	for(int i =0 ;i<5; i++)
	{
		cin >> array[i];
	}
	min = array[0];
		for(int i=0; i<5; i++)
		{
				if (array[i] > max)
				{
					max = array[i];
				}
		}
		for(int i=0; i<5; i++)
		{
				if (array[i] < min)
				{
					min = array[i];
				}
		}	

		float  max_1 = max +1;
		cout << max_1 << endl;
		div = max_1/5;
		cout << "Divided " << ceil(div) << endl;

		node *arr = new node[5];
		for(int i=0; i<5; i++)
		{
			arr[i].info = i;
		}
		for(int i=0; i<5; i++)
		{
			cout << arr[i].info<< endl;
		}
		

}

int main ()
{
	max_value();
}