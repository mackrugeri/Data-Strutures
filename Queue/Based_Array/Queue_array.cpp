#include <iostream>
using namespace std;



class queue_Array{
	private:
		int *fornt;
		int *rear;
		int length;
		int *array = new int [10];
		int counter;
	public:
		queue_Array(){
			system("clear");
			fornt = NULL;
			rear = NULL;
			cout << "Enter the length of array" << endl;
			length = 10;
		}

		int Enqueue()
		{
			if(fornt == NULL)
			{
				fornt = array;
				rear = array;
				cin >> *rear;
				rear = rear + 1;
				counter++;
			}
			else
			{
				cout << "Enter value in Array" << endl;
				cin >> *rear;
				rear = rear + 1;
				counter++;
			}

		}

		int dequeue()
		{
				if(rear == NULL)
				{
					cout << "There is no element in Queue" << endl;
				}
				else
				{
					fornt = fornt + 1;
				}
		}

		int printing(){
			int *temp;
			temp = fornt ;
			for (int i = 0;i < length; i++)
			{
				cout << "The value of array[0] is " << *temp << endl;
				temp = temp + 1;
			}
			temp = fornt;
		}

		int circular_Enqueue(){
			if (rear != fornt)
			{
				cout << "Enter the value AHSAN haseeb" << endl;

				cin >> *rear;
				cout << array[0] << " " << array[1] << endl;
				rear = rear + 1;
			}
			if (rear == NULL || fornt == NULL)
			{
				fornt = array;
				rear = array;
				cout << "Enter the value " << endl;
				cin >> *rear;
				rear = rear + 1;
			}

			if( *rear == array[length]){
				rear = array;
				cout << "I am in " << endl;
				cout << "THe value of rear is " << *rear << endl;
			}

			else
			{
				cout << "YOu array has been fulled " << endl;
					return 0;
			}

		}
};

int main ()
{
	queue_Array q1;
	for (int i = 0; i <  11; i++)
	{
		q1.circular_Enqueue();	
		cout << "Hello World" << endl;
	}

	cout << "Printing Process" << endl;
	q1.printing();


	cout << "Delecting process"<< endl;
	q1.dequeue();
	q1.dequeue();
	cout << endl;
	cout << endl;
	cout << "Printing Process" << endl;
	q1.printing();

	cout << endl;
	cout << endl;

	cout << "Again Inserting Process" << endl;
	q1.circular_Enqueue();
	q1.circular_Enqueue();
	q1.circular_Enqueue();

	cout << endl;
	cout << endl;
	cout << "Printing Process" << endl;
	q1.printing();                           




	/* 				There is an issuse with printing that why the resultt is not showing COrrect << endl;

	*/


}