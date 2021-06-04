#include <iostream>
using namespace std;


class Merge{
	private:
		int size;
		int length;
		int mid;
		int temp1;
		int length1;
		int length2;
	public	:
		int *array = new int [size];
		Merge(){
			size = 0;
			length = 0;
			mid =0;

		}

		int Enter_value ()
		{
			cout << "Enter the size of array " << endl;
			cin >> size;

			cout << "ENter the value " << endl;
			for (int i = 0; i < size; ++i)
			{
				cin >> array[i];
			}
			Merge_sorting(array);
		}



		int length_of_array(int *array){

			int i=0;
			while(array[i])
			  {
			    i++;
			  }
			  return i;
		}

		int merge_together(int *left, int *right)
		{
			length1 = length_of_array(left);
			length2 = length_of_array(right);
			
				for(int j=0; j<length2 && j<length1; j++)
				{
					if(left[j] < right[j])
					{
						temp1 = left[j];
						left[j] = right[j];
						right[j] = temp1;
					}
				}
			return 0;
		}

		int Merge_sorting(int *array)
		{
			length = length_of_array(array);
			if (length <= 1)
			{
				return 0;
			}
			mid = length/2;

			int *left = new int [mid];
			int *right = new int [length - mid];

			for (int i=0; i<mid; i++)
			{
				left[i] = array[i];
			}
			int counter =mid;
 			for (int j=0; j<(length-mid); j++)
			{
				right[j] = array[counter];
				counter++;
			}
			cout << endl;
			Merge_sorting(left);
			length1 = length_of_array(left);

			merge_together(left,right); 
			length2 = length_of_array(right);
			Merge_sorting(right);
			if(left[0] > right[0])
			{
				temp1 = left[0];
				left[0] = right[0];
				right[0] = temp1;
			}

			

		}

		int Printing(int *array)
		{
			for (int i = 0; i < size; ++i)
			{
				cout << array[i] << " ";
			}
		}
};

int main ()
{
	Merge M1;

	M1.Enter_value();
	// M1.Merge_sorting(M1.array)
	M1.Printing(M1.array);
}