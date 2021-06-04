#include <iostream>
using namespace std;


struct node {
	int value;
	node *next;
	bool flag;
};

class link_list{
	private:
		node *head = NULL;
		node *temp = NULL;
		node *ptr = NULL;
		int key;
	public:
		int inserting(){
			for(int i=0; i<10; i++)
			{
				if(head == NULL){
					head = new node;
					cout << "Enter the value" << endl; 
					cin >> head->value;
					head->next = NULL;
					head->flag = 0;
				}
				else{
					cout << "Enter the value" << endl;
					temp = new node;
					cin >> temp -> value;
					temp->flag = 0;
					temp -> next = head;
					head = temp;
				}
			}
		}

		int largest_5_index(){
			temp =head ;
			int  Reciving_value = 0;
			for(int i =0; i<3; i++){
				Reciving_value = max(head);
			}
			cout << "The third Maximum Number is " << Reciving_value << endl;
		}

		int max (node  *head){
			int max = 0;
			node *temp1;
			temp = head;
			while(temp != NULL){
				if(temp->flag == 0){
					if(temp -> value > max){
						temp1 = temp;
						max = temp ->value;
					}
				}
				temp = temp ->next;
			}

				temp1 ->flag = 1;
				return  (max);
		}

		int Finding(){
			cout << endl;
			cout << "which value do you need to found" << endl;
			cin >> key;
			temp = head;
			while(temp != NULL){
					if(key == temp->next->value){
						cout << "It is found" << endl;
						return 0;
					}
					temp = temp->next;
			}

 		}
		
 		int deleting_at(){
 			cout << endl;
 			cout << "which value of node do you want to delete" << endl;
 			cin >> key;
 			temp = head;
 			while(temp != NULL){
 				if(key == temp->next->value){
 					cout << "It is found" << endl;
 					    ptr = temp->next;
 					    temp->next = temp->next->next;
 					    delete ptr;
 					    ptr = NULL;
 					    return 0;
 				}
 				temp = temp ->next;
 			}
 		}

		int printing(){
			temp = head;
			for(int i=0; i<10; i++){
				cout << temp->value << " ";
				temp = temp ->next;
			}
		}

		int delete_memory_free(){
			
			delete temp;
			delete head;
		}

		int finding_duplicate()
		{
			node  *temp1 = head;
			int R_counter =0; 
			while (temp1 != NULL)
				{
					R_counter = Duplication(temp1);
					cout << temp1->value << " is repeated " << R_counter << " time" << endl;
					temp1 = temp1 -> next; 	
				}
		}

		int Duplication(node *temp)
		{
				int value; 
				int counter = 1;
				node * temp3;
				node * temp4;
				value = temp -> value ;
				temp3 = temp -> next;
				while (temp3 !=head)
				{
					if (temp3->value == value)
					{
						temp4 = temp3;
						temp3 = temp3 ->next;
						temp -> next = temp4;
						delete temp4;
						temp4 = NULL;
					}
					temp3 = temp3 -> next;
					temp = temp -> next;
					break;

				}
				return counter;
		}
};

int main(){
	link_list l1;
	l1.inserting();
	// l1.largest_5_index();
	// l1.max ();
	// l1.Finding();
	// l1.printing();
	// l1.deleting_at();
	// l1.printing();
	l1.finding_duplicate();
	l1.printing();
}