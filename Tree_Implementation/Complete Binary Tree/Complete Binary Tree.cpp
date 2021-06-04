#include <iostream>
using namespace std;



struct node{
	int info;
	node *left;
	node *right;
};


class Complete_Binary_Tree{
	private:
		node *temp;
		int node_counter;
		int local_height;
		int height;
		int flag;
	public:
	node *root;
	int key;
	Complete_Binary_Tree(){
		root = NULL;
		temp = NULL;
		flag = 0;
		node_counter = 0;
		local_height = 0;
		height = 0;
		int key;
	}
	int power_computation(int Base, int Exp)
	{
		int Storing =1;
		for(int i=0; i<Exp; i++)
		{
			Storing  = Base * Storing; 
		}
		return Storing;
	}

	int insertion (node *temp)
	{
		
		if (root == NULL)
			{
				root = new node;
				root -> info = key;
				root-> left = NULL;
				root ->right = NULL;
				node_counter++;
			}
		else
		{
			if( power_computation(2,height+1)-1 == node_counter)
			{
				if (temp->left != NULL)
				{
					local_height++;
					insertion(temp->left);
					local_height--;
				}
				else 
				{
					cout << "Temp ->left " << endl;
					temp->left = new node;
					temp->left->info = key;
					temp->left->left = NULL;
					temp->left->right = NULL;
					node_counter++;
					height ++;
					return 0;
				}
			}
			else{

				if (local_height == height-1 && temp ->left == NULL)
				{
					cout << "Temp->left" << endl;
					temp->left = new node;
					temp->left->info = key;
					temp->left->left = NULL;
					temp->left->right = NULL;
					node_counter++; 
					return 0;
				}
				
				if(local_height == height-1 && temp ->right == NULL)
				{
					cout << "Temp->rigth" << endl;
					temp ->right = new node;
					temp->right->info = key;
					temp->right->left = NULL;
					temp->right->right = NULL;
					node_counter++;
					return 0;
				}

				if (temp->left != NULL)
				{
					local_height++;
					insertion(temp->left);
					local_height--;
				}
				if (temp->right != NULL)
				{
					local_height++;
					insertion(temp->right);
					local_height--;
				}
				return 0;
			}
		}



	}

	int Printing(node *temp)
	{
		if(temp->left != NULL)
		{
			Printing(temp->left);
		}
		// if (key != temp->info)
		// {
			cout << temp->info << " " ;
		//}
		
		if (temp->right != NULL)
		{
			Printing(temp->right);
		}
	}
};

int main ()
{
	Complete_Binary_Tree C1;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the value " << endl;
		cin >> C1.key;
		C1.insertion(C1.root);
	}
	C1.Printing(C1.root);
}