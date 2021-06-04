#include <iostream>
using namespace std;

int function(int *array, int index_starting)
{
	int min = array[index_starting];
	
	int sorting =0;
	int flag = 0;
	for (int i = index_starting+1; i < 10; ++i)
	{
		if (min > array[i])
		{
			sorting = i;
			flag = 1;
			min = array[i];
		}
	}
	if (flag == 1){
		
		return sorting;
	}
	else{
		
		return index_starting;
	}
}

int main()
{
	int array[10];
	int index_min =0;
	int swapping =0;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < 10; i++)
	{
		index_min = function(array,i);
		swapping = array[i];
		array[i] = array[index_min];
		array[index_min] = swapping;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	
}