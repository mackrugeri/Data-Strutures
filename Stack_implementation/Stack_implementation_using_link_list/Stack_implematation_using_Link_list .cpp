#include <iostream>
#include <string.h>
using namespace std;


struct node{
    int value;
    node *next;
};

class Stack
{
    private: 
        node *head;
        node *temp;
    public:

        Stack()
        {
            head = NULL;
            temp = NULL;
        }
        
        int Empty_stack(){

            if (head == NULL)
            {
                cout << "Your Stack is Under Flow " << endl;
            }
            else
            {
                cout << "There is some thing in Stack " << endl;
            }

        }
        int push(int val)
        {

            temp = new node; 
            temp->value = val;
            temp-> next = head;
            head = temp;

        }

       
        int pop()
        {

            temp = head;
            head = temp->next;
            delete temp;
            temp = NULL;

        }
        
        int Top()
        {

            cout << "The value of Top is: " <<  head->value << endl;

        }


        int Rev_string_using_stack(int *ar, int length)
        {

            for(int i=0; i < length; i++)
            {

                push(ar[i]);

            }
            for(int i=0; i< length; i++)
            {
                ar[i] = head->value;
                 pop();

             }
        }
        int Printing1()
        {
            cout << "Your are calling Print function" << endl;
            temp = head;
                cout << temp -> value << endl;
                temp = temp -> next;
        }
};

int main ()
{
    Stack S;

    cout << "Enter the String which you want to reverse it " << endl;
    int ar[10];
    for(int i=0; i<10; i++)
    {
        cin >> ar[i]; 
    }
    S.Rev_string_using_stack(ar,10);

    cout << "Here is required Reverse Array " << endl;
    for (int i = 0; i <10; i++)
    {
    	cout << ar[i] << " ";	
    }
    cout << endl;
}
