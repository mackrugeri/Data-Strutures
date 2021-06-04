#include <iostream>
using namespace std;

/*
Name:	Ahsan Chughtai
Program:	Doubly link list
Data:	29-9-2018
*/

struct node{
	int value;
	node *next;
	node *pervious;	
};
class Doubly_link_list{

	private:
		node *head;
		node *temp;
		node *ptr;
		node *ptr1;
	public:
		Doubly_link_list(){
			head = NULL;
			temp = NULL;
			ptr = NULL;
			ptr1 = NULL;
		}
		int In_Doubly_link_list(){
			for (int i = 0; i < 10; i++)
			{
				if(head == NULL){
					head = new node;
					cout << "Enter the value: " ;
					cin >> head -> value;
					head -> next = NULL;
					head -> pervious = NULL;
					temp = head;
				}
				else{
					ptr = temp ;
					temp ->next = new node;
					temp = temp ->next;
					temp->next = NULL;
					temp ->pervious = ptr;
					cout << endl;
					cout << "Enter the value: " ;
					cin >> temp -> value;
				}

			}
			

		}

		int Dis_Doub_list(){
			cout << "Here is required Value in Node " << endl;
			temp = head;
			for(int i=0; i< 9; i++){
				cout << temp -> value << " ";
				temp = temp -> next;
			}
			cout << endl;
			
		}

		int insert_at_link_List(){
			temp = head;
			cout << "Enter the Key " << endl;
			int key;
			cin >> key;
			if (head == NULL){
				head =new node;
				head->value = key;
				head ->next = NULL;
				head ->pervious = NULL;
			}			
			else{
				while(temp!=NULL){
					if(temp -> value == key){
						ptr1 = temp ->next;
						ptr = temp ;
						temp ->next = new node ;
						temp = temp -> next;
						temp ->next = ptr1;
						temp ->pervious = ptr;
						cout << "Enter the value for New Node " << endl;
						cin >> temp ->value ;
						break;
					}
					temp = temp ->next;
				}
			}
		}
		int delete_at_link_list(){
			temp =head;
			cout << "Enter the key "<< endl;
			int key;
			cin >> key;
			if (head == NULL)
			{
				cout << "There is not Link List is establish " << endl;
			}
			else{
				while(temp != NULL){
					if(temp ->next ->value == key){
						cout << "Hello World" << endl;
						ptr1 = temp -> next;
						ptr = temp ;
						temp ->next = temp ->next ->next;
						temp = temp ->next;
						temp ->pervious = ptr;
						delete ptr1;
						ptr1 = NULL;
						break;
					}
					temp = temp ->next;
				}
			}
		}
};




int main(){
	Doubly_link_list D1;
	D1.In_Doubly_link_list();
	// D1.Dis_Doub_list();
	// D1.insert_at_link_List();
	// D1.Dis_Doub_list();
	D1.delete_at_link_list();
	D1.Dis_Doub_list();
}