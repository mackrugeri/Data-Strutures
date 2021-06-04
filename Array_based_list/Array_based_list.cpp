#include <iostream>
using namespace std;


class array_based_list{
	private:
		int length;
		int size;
		int *array = new int [10];
		int *temp;
		int *temp1;
	public:
		array_based_list(){

			cout << "Enter the length" << endl;
			cin >> length;
			cout << "Enter the size" << endl;
			cin >> size ;

			cout << "Enter the values " << endl;
			for(int i=0; i< size;i++)
			{
					cin >> *(array+i);
			}
		}

		int inserting()
		{
			cout << "Your inside inserting at End function" << endl;
			cout << "Enter the value " << endl;
			cin >> *(array+size);
		}

		int inserting_at(int index)
		{
			if (index > size && index < length)
			{
				temp = temp+index;
				cout << "Enter the value " << endl;
				cin >> *temp;
			}
			if(index <size)
			{
				temp = temp+index;
				temp1 = temp1+size;
				for (int i = 0; i < length; i++)
				{
					
					if(temp = temp1)
					{
						break;
					}
					*(temp1+1) = *temp1;
					temp1--;
				}
				cout << "Enter the value" << endl;
				cin >> *temp; 
			}
		}

		int printing()
		{
			cout << "Here is your required values " << endl;
			for(int i=0; i<length; i++)
			{
					cout << *(array+i) << " ";
			}
		}

};

int main ()
{
	array_based_list A1;
	A1.inserting();
	A1.printing();
	int inserting=0;
	cout << "Where you want to insert " << endl;
	cin >> inserting;
	A1.inserting_at(inserting);
	A1.printing();
}