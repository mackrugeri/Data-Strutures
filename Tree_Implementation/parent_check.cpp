#include <iostream>
using namespace std;

struct node{
    int info;
    node *left;
    node *right;
};

class Parent_check
{
    private:
        node *temp;
        int counter ;
        int flag;
    public:
        node *root;
        int number;
       	Parent_check(){
            temp = NULL;
            root = NULL;
            counter = 0;
            flag = 0;
        }

        int Inserting_Tree(node *temp)
        {

            if(root == NULL)
            {
                root = new node;
                root->left = NULL;
                root->right = NULL;
                root->info = number;
                temp = root;
                return 0;
            }
            if(temp->info == number)
            {
                cout << "I found a same thing " << endl;
                return 1;
            }


            if(temp->info > number)
            {

                if (temp->left == NULL)
                {
                    temp->left = new node;
                    temp->left->info = number;
                    temp->left->right = NULL;
                    temp->left->left = NULL;
                    return 0;
                }
                else
                {
                    Inserting_Tree(temp->left);
                }
            }
            if(temp->info < number)
            {
                if(temp->right == NULL)
                {
                    temp->right = new node;
                    temp->right->info = number;
                    temp->right->left = NULL;
                    temp->right->right = NULL;
                    return 0;
                }
                else
                {
                    Inserting_Tree(temp->right);
                }    
            }
        }


        int check_parent(node *temp){

        	if (temp->left !=NULL && temp->right)
        	{
        		// cout << temp->info << endl;
        		counter++;
        	}
        	if (temp->left !=NULL)
        	{
        		check_parent(temp->left);
        	}
        	if (temp->right != NULL)
        	{
        		check_parent(temp->right);
        	}
        	return counter;
        }

};


int main (){
	
	Parent_check P1;
	for(int i=0;i<8;i++)
	{
		cout << "Enter the number" << endl;
        cin >> P1.number;
		P1.Inserting_Tree(P1.root);
	}
	cout << endl;
	cout << "---------------------------------------------" << endl;
	cout << endl;
	cout <<"Total Number of Parent having Binary Chlid is " <<  P1.check_parent(P1.root) << endl;
	cout << endl;
	cout << "---------------------------------------------" << endl;
}