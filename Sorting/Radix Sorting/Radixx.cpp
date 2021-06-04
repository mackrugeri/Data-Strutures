#include <iostream>
using namespace std;

class Radix{
	private:
		int temp;
		int temp1;
		int temp3;
		int value;
		int value1;
		int *array = new int [5];
		int size_of_number;
		int size_of_array;
		int m;
	public:
		Radix(){
			temp3 = 0;
			temp1 =0;
			temp =0;
			value1=0;
			value =0;
			size_of_array =5;
			size_of_number =2;
			int m =0;
		}
		int value_Enter ()
		{
			cout << "Enter the value "<< endl;
			for (int i = 0; i < 5;i++)
			{
				cin >> array[i];
			}
		}
		int Printing()
		{
			cout << "Here is the value of Array" << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << array[i] << " ";
			}
			cout << endl;
		}
		int Radix_sorting(){
			cout << "I am calling " << endl;
			for (int i = 0; i < size_of_number ; i++)
			{
				for (int j = 0; j < size_of_array; j++)
				{
					m =0;
					temp = array[j];
					for (int k = 0; k < size_of_array; k++)
					{

						temp1 = array[k];
						// cout << "The value of temp1 " << temp1 << endl;
						temp_breaking_function(temp,temp1,i+1);

						if (value > value1)
						{
							temp3 = array[k];
							// cout << "145785432567543256754356" << endl;
							array[k] = array[m];
							array[m] = temp3;
							m++;
							cout << m << endl;
							
						}
						Printing();
					}
				}
			}
		}

		int temp_breaking_function(int extra,int extra1,int H)
		{
			// cout <<"The value of extra1 "<< extra1 <<endl;
			for (int i = 0; i < H ; i++)
			{
				value = extra % 10;
				extra = extra /10;
				// cout <<"The value of extra"<< extra <<endl;

				value1 = extra1 % 10;
				extra1 = extra1 / 10;
				// cout <<"The value of extra1 "<< extra1 <<endl;
			}
		}
};

int main()
{
	Radix R1;
	R1.value_Enter();
	R1.Printing();

	R1.Radix_sorting();
	R1.Printing();
}