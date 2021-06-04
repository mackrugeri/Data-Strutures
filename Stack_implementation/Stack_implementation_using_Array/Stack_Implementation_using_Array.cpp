
#include <iostream>
using namespace std;


class Stack_using_array{

	private:
		int *arr = new int [10];
		int counter ;
		int *head;
		int length;
		int i=0;
	public:
		Stack_using_array(){
			head = arr;
			counter =0;
			length = 10;
		}
		int is_full(){
				if(counter == length){
					cout << "Your Stack in OverFlow" << endl;
					return 0;
				}
		}
		int Pushing(){
			cout << "The value of Counter is " << counter << endl;
			if(counter == length){
				cout << "Your Stack in OverFlow" << endl;
				return 0;
			}
			cin >> *(arr+i);
			head = arr;
			
			counter++;
			i++;
		}
		int Pop(){
			head = head-1;
			i--;
			counter--;
		}
};

int main(){
		
	Stack_using_array S1;
	cout << "Your are calling Pushing Function" << endl;
	S1.Pushing();
	S1.Pushing();
	S1.Pushing();
	cout << "You calling Pop Function " << endl;
	S1.Pop();
	S1.Pushing();
	S1.Pushing();	
	S1.Pushing();
	S1.Pushing();
	S1.Pushing();
	S1.Pushing();
	S1.Pushing();	
	S1.Pushing();	
}