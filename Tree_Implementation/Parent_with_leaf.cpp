#include <iostream>
using namespace std;

struct node{
    int info;
    node *left;
    node *right;
};

class Parent_with_leaf 
{
    private:
        node *temp;
        int counter ;
        int flag;
    public:
        node *root;
        int number;

       	Parent_with_leaf()
       	{
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


        int Parent_leaf(node *temp)
        {
        	if (temp->left != NULL && temp->right != NULL)
        	{
        		if (temp->left->left == NULL && temp->left->right == NULL)
        	        	{
        	        		if(temp->right->left == NULL && temp->right->right == NULL)
        	        		{
        	        			cout << temp->info << endl;
        	        			counter++;
        	        			return counter;
        	        		}
        	        	}
        	 }

        	if (temp->left != NULL)
        	{
        		Parent_leaf(temp->left);
        	}

        	if (temp->right != NULL)
        	{
        		Parent_leaf(temp->right);
        	}

        	return counter;
        }
};

int main() {
	Parent_with_leaf T1;
	for (int i = 0; i < 15; i++)
    {
    	cout << "Enter the number" << endl;
       	cin >> T1.number;
       	T1.Inserting_Tree(T1.root);	
		
    }
    cout << T1.Parent_leaf(T1.root) << endl ;


}