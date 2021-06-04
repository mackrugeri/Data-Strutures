#include <iostream>
using namespace std;


class storing{

	public:	
		int size;
		int length;
		int *array = new int [size];
		int temp;
	public:
	
	storing()
	{
		size =0;
		length =0;
		temp = 0;
	}

	int Entering_values()
	{
		cout << "Enter the Size of Array" << endl;
		cin >> size;
		cout << "Enter the Length of Array" << endl;
		cin >> length;
		cout << "Enter the Values in Array "<< endl;
		for (int i=0; i< length; i++)
		{
			cin >> array[i];
		}
	}
	int Selection_sorting()
	{
		for(int i=0; i<length; i++)
		{
			for (int j =i; j<length; j++)
			{
				if (array[i] > array[j])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
	}

	int Printing()
	{
		for (int i = 0; i < length; ++i)
		{
			cout << array[i] << " ";
		}
	}
};


int main ()
{
	storing S1;
	S1.Entering_values();	
	S1.Selection_sorting();
	S1.Printing();
}