#include<iostream>
using namespace std;


struct node{
	int info;
	node *right;
	node *left;
	bool flag;
};

class tree{
	private:
		int key;
		node *temp;
		
	public:
		node *root;
		tree()
		{
			temp = NULL;
			root = NULL;
		}

	int insertion(node *temp)
	{
		if(root == NULL)
		{
			root = new node();
			cout<<"Enter the value for insertion "<<endl;
			cin >> key;
			root->info = key;
			root->left = NULL;
			root->right = NULL;
			root->flag =1;
			temp = root;
			return 0;
		}

		if(temp->left == NULL && temp->right == NULL)
		{
			if(temp->flag == 1)
			{
				temp->right = new node();
				cout<<"Enter the value for insertion "<<endl;
				cin >> key;
				temp->right->info = key;
				temp->right->right = NULL;
				temp->right->left = NULL;
				temp->right->flag = 0;
				return 0;
			}

			if(temp->flag == 0)
			{
				temp->left = new node();
				cout<<"Enter the value for insertion "<<endl;
				cin >> key;
				temp->left->info = key;
				temp->left->right = NULL;
				temp->left->left = NULL;
				temp->left->flag =1;
				return 0;
			}
		}
		else
		{
			if(temp->flag == 0)
			{
				insertion(temp->left);
			}

			if(temp->flag == 1)
			{
				insertion(temp->right);
			}
		}

		}

		int printing(node *temp)
		{
			if(temp->left != NULL)
			{
				printing(temp->left);
			}

			cout<< temp->info <<"   "<<endl;

			if(temp->right != NULL)
			{
				printing(temp->right);
			} 
		}
	
};


int main(){
	
	tree t;
	for(int i=0; i<5; i++)
	{
	t.insertion(t.root);
	}
	cout<<endl;
	t.printing(t.root);
	return 0;
}