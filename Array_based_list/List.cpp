#include <iostream>
using namespace std;


class Array_based_list{
	private:
		int length;
		int size;
		int *Array = new int[length];
	public:
		bool flag = true;
		Array_based_list(){
			cout << "Enter the length of Array " << endl;
			length = 10;
			cout << "Enter the size of Array " << endl;
			cin >> size;
			if (size > length)
			{
				cout << "Wrong size is given" << endl;
				flag = false;
			}
			for(int i =0; i<length;i++)
			{
				Array[i] = 0;
			} 
		}

		int Enter_the_data()
		{
			cout << "Kindly Enter the Data" << endl;
			for (int i = 0; i < size; i++)
			{
				cin >> Array[i];
			}
		}

		int dislay_data()
		{
			for (int i = 0; i < length; ++i)
			{
				cout << Array[i] << " ";
			}
			cout << endl;
		}
		int len(int size)
		{
			if (size > length)
			{
				cout << "Sorry Size become greater then length" << endl;
				return 0;
			}
		}

		int inserton_end(){
			
			int sorting_index =0;
			if (length < size)
			{
				cout << "Can't go Forward" << endl;
			}
			
			else{
				for (int i=0; i<length;i++)
				{
					if (Array[i] == 0)
					{
						sorting_index = i;
						break;
					}
				}
				cout << "Enter the value " << endl; 
				cin >> Array[sorting_index]; 
				size ++;
			}
		}

		int inserton_at(int postion,int value)
		{
			if(length < size || length <postion)
			{
				cout << "Sorry Postion not found" << endl;
			}
			else
			{
				if (postion > size)
				{
					Array[postion] = value;
				}
				else
				{
					int *ptr = NULL;
					int *ptr_end = NULL;
					ptr_end = Array;
					ptr = Array;
					ptr_end =ptr_end+(size-1);
					ptr = ptr + postion;

					for(int i =0; i<length; i++)
					{
						if (ptr == ptr_end)
						{
							break;
						}
						else
						{
							*(ptr_end+1) = *ptr_end;
							ptr_end--; 
						}
					}
					*(ptr_end+1) = *ptr_end;
					cout << *ptr << endl;
					cout << *ptr_end << endl;
					*ptr = value;
				}
			}
		}
		

};

int main(){
	Array_based_list A1;
	if(A1.flag == false)
	{
		cout << "Sorry Code can't be able to excuted" << endl;
	}
	else
	{
		A1.Enter_the_data();
		A1.dislay_data();
		cout << "Insertion at end" << endl;
		A1.inserton_end();
		A1.dislay_data();
		cout << "Enter the place where you want to insert and also Value" << endl; 
		int key;
		int place;
		cin >> key;
		cin >> place;
		A1.inserton_at(place,key);
		A1.dislay_data();
	}

}