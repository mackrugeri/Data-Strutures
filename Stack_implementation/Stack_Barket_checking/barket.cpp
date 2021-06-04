#include <iostream>
using namespace std;


struct node{
	int value;
	node *next;
};


class Barkets_check{
	private:
		node *head;
		node *temp;
	public:
		Barkets_check(){
			head = NULL;
			temp = NULL;
		}

		int push(int barket)
		{
			temp = new node;
			temp-> value = barket;
			temp -> next = head;
			head = temp;
		}

		int pop()
		{
			temp = head;
			head = head -> next;
			delete temp;
			temp = NULL;
		}

		int Empty_stack()
		{
			if (head == NULL)
			{
				cout << "Stack is empty " << endl;
				return 1;
			}
			else
			{
				return 0;
			}
		}

		int Checking_expression(string exp)
		{
			for(int i =0; i < exp.length(); i++)
			{
				if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
				{
					push(exp[i]);
				}
				if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
				{
					cout << "Hello World" << endl;
					pop();
				}
			}
			if (Empty_stack())
				{
					cout << "Valid Expression" << endl;
				}
			else
				{
					cout << "Not Valid Expression " << endl;	
				}
		}

};

int main (){
	Barkets_check B1;
	cout << "Enter the Expression" << endl;
	string exp;
	cin >> exp;
	B1.Checking_expression(exp);
}