#include <iostream>
using namespace std;

struct node{
	
	int value;
	node *next;

};


class Queue_link{
	
	private:

		node *fornt;
		node *rear;
		node *temp;

	public:
		Queue_link(){
			system ("clear");
			fornt = NULL;
			rear = NULL;
			temp = NULL;
		}

		int making_Queue_link(){

			if(fornt == NULL)
			{
				//cout << "Fornt is NULL" << endl;
				fornt = new node;
				cout << "Enter the value" << endl;
				cin >> fornt->value;
				rear = fornt;
			}
			else
			{
				rear ->next = new node;
				rear = rear -> next;
				cout << "Enter the value " << endl;
				cin >> rear -> value;
			}
		}

		int printing()
		{
			cout << "Printing " <<endl;
			temp = fornt;
			while(temp->next != NULL)
			{
				cout << temp->value << " ";
				temp = temp -> next;
			}
			cout << endl;
		}

		int deleting()
		{
			if(fornt == NULL)
			{
				cout << "No Queue_link_list is Form " << endl;
				return 0;
			}
			else
			{
				temp = fornt;
				fornt = fornt -> next;
				delete temp;
				temp = NULL;
			}   
		}
};

int main()
{
	Queue_link q1;
	q1.making_Queue_link();
	q1.making_Queue_link();
	q1.making_Queue_link();
	q1.making_Queue_link();
	q1.making_Queue_link();
	q1.making_Queue_link();
	q1.making_Queue_link();
	q1.making_Queue_link();

	cout << endl;
	q1.printing();

	cout << endl;
	q1.printing();

	cout << endl;
	q1.deleting();


	cout << endl;
	q1.printing();

}