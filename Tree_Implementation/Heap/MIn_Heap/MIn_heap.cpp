#include <iostream>
using namespace std;


struct node 
{
	int info;
	node *left;
	node *right;
};

class min_heap
{
	private:
		node *temp;
		int local_height;
		int node_counter;
		int height;
		

	public:
		int key;
		node *root;
		bool flag;
		min_heap(){
			temp = NULL;
			root = NULL;
			local_height = 0;
			node_counter =0;
			height = 0;
			flag =1;
		}

		int power_height(int Base,int Exp)
		{
			int sorting = 1;
			for(int i =0; i<Exp; i++)
			{
				sorting = sorting*Base;
			}

			return	sorting;
		}

		int insertion(node *temp)
		{
			if (root == NULL)
			{
			
				root = new node;
				root->left = NULL;
				root->right = NULL;
				cout << "Enter the value " << endl;
				cin >> key; 
				root -> info = key;
				node_counter ++ ;
				temp = root; 
			}

			else
			{
				if (power_height(2,height+1)-1 == node_counter)
				{
					
					if (temp->left !=  NULL)
					{
						local_height++;
						insertion(temp->left);
						local_height--;
						if (temp->info > temp->left->info)
						{
							int s;
							s = temp->info;
							temp->info = temp->left->info;
							temp->left->info = s;
						}
					}
					else 
					{
				
						temp->left = new node;
						temp->left->left = NULL;
						temp->left->right = NULL;
						cout << "Enter the Value "<< endl;
						cin >> key;
						temp->left->info = key;
						node_counter++;
						height++;
						if (temp->info > temp->left->info)
						{
							int s;
							s = temp->info;
							temp->info = temp->left->info;
							temp->left->info = s;

						}
						return 0;
					}
				}
z
				else
				{

					if (flag == true)
					{

						if (local_height == height-1 && temp->left == NULL)
						{
							temp->left = new node;
							temp->left = new node;
							temp->left->left = NULL;
							temp->left->right = NULL;
							cout << "Enter the Value "<< endl;
							cin >> key;
							temp->left->info = key;
							node_counter++;
							flag = false;
							if (temp->info > temp->left->info)
							{
								int s;
								s = temp->info;
								temp->info = temp->left->info;
								temp->left->info = s;

							}
							return 0;
						}


						if (local_height == height-1 && temp->right == NULL)
						{
							temp->right = new node;
							temp->right->left = NULL;
							temp->right->right = NULL;
							cout << "Enter the Value" << endl;
							cin >> key;
							temp->right->info = key;
							node_counter++;
							flag = false;
							if ( temp->info > temp->right->info)
						{
							int s;
							s = temp->info;
							temp->info = temp->right->info;
							temp->right->info = s;
						
						}
							return 0;
						}

					}
					if (temp ->left != NULL)
					{
						local_height ++;
						insertion(temp->left);
						local_height--;
						if (temp->info > temp->left->info)
						{
							int s;
							s = temp->info;
							temp->info = temp->left->info;
							temp->left->info = s;


						}
					}
					if (temp->right != NULL)
					{
						local_height ++;
						insertion(temp->right);
						local_height--;
						if ( temp->info > temp->right-
							>info)
						{
							int s;
							s = temp->info;
							temp->info = temp->right->info;
							temp->right->info = s;
						
						}
					}

					return 0;
				}
			}
		}

		int min_heap_deletion(node *temp)
		{
	 			
				// if (temp->left != NULL && temp->right != NULL)
				if (temp->left ->info < temp ->right->info)
				{
					cout << "It is called left" << endl;
					// temp->info = temp->left->info;
					// temp->left->info = 0;
					if (temp ->left != NULL && temp->right != NULL)
						min_heap_deletion(temp->left);	
				}
				// cout << "Hello world " << temp -> info << endl; 
				// if  (temp->left != NULL && temp->right != NULL)
 				if (temp->left ->info > temp ->right->info)
				{
					cout << "It is called right" << endl;

					// temp->info = temp->right->info;
					// temp->right->info = 0;
					if (temp->right != NULL && temp->left != NULL)
						min_heap_deletion(temp->right);
				}
				// cout << "Hello world " << temp -> info << endl;
				// // if (temp->left == NULL && temp->right == NULL)
				// // {
				// // 	flag =1;
				// // 	return 0;
				// // }
					
		}

		int swap_left()
		{
			int s = temp->info;
			temp->info = temp->left->info;
			temp->left->info = s;
		}
		int swap_right()
		{
			int s = temp->info;
			temp->info = temp->right->info;
			temp->right->info = s;
		}
		int inorder(node *temp)
		{
			if (temp->left != NULL)
				inorder(temp->left);

			cout << temp->info << " ";

			if (temp->right != NULL)
				inorder(temp->right);
		}
};

int main(){
		min_heap M1;
		for (int i =0; i < 7; i++)
		{
			M1.flag = true;
			M1.insertion(M1.root);
		}
		cout << M1.root->left->info << endl;  

}