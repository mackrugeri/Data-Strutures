#include <iostream>
using namespace std;

struct node{
    int info;
    node *left;
    node *right;
};

class Tree_implementation
{
    private:
        node *temp;
        int counter ;
        int flag;
    public:
        node *root;
        int number;
        Tree_implementation(){
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

        int Searching(node *temp)
        {
            if (root == NULL)
            {
                cout << "There is No Tree Exit" << endl;
                return 0;
            }
            if (root == temp)
            {
                if (root->info == number)
                {
                    cout << "Finally I found it " << endl;
                    return 0;
                }
                else
                {
                    if(root -> info > number)
                    {
                        if (root -> left != NULL)
                        {
                            Searching(temp->left);
                        }
                        if (root -> right != NULL)
                        {
                            Searching(temp->right);
                        }
                        else
                        {
                            cout << "Can't able to find" << endl;
                            return 0;
                        }
                    }
                }
            }
            if (temp->info > number)
            {
                if (temp->left != NULL)
                {
                    if (temp->left->info == number)
                    {
                        cout << "Finally we find it" << endl;
                        return 0;
                    }
                    else
                    {
                        Searching(temp->left);
                    }
                }
            }
            if(temp->info < number)
            {
                if (temp->right != NULL)
                {
                    if (temp->right->info == number)
                    {
                        cout << "Finally we find it " << endl;
                        return 0;
                    }
                    else
                    {
                        Searching(temp->left);
                    }
                }
            }
        }

        int Number_of_leaf(node *temp)
        {
            if (temp->left != NULL)
            {
                Number_of_leaf(temp->left);
            }
            if(temp->right != NULL)
            {
                Number_of_leaf(temp->right);
            }
            if(temp->left == NULL && temp->right == NULL)
            {

                cout <<"leafs values is "<< temp->info << endl;
            }
            return counter;
            
        }

        int Leaf_deletion_in_tree(node *temp)
        {
            if ((temp->left->left == NULL && temp ->left->right == NULL) || (temp->right->left == NULL && temp ->right->right == NULL))
            {
                if (temp->left->info == number )
                {
                    delete temp->left;
                    temp->left = NULL;
                    flag = 1;
                    return 0;
                }
                if (temp->right->info == number)
                {
                	delete temp->right;
                	temp->right = NULL;
                	flag = 1;
                    return 0;
                }
            }
            if(temp->left!= NULL)
            {    
                if(temp ->left->right != NULL)
                {
                    Leaf_deletion_in_tree(temp->left);
                }
            }
            if(temp->left!= NULL)
            {

                if(temp ->left->left != NULL)
                {
                    Leaf_deletion_in_tree(temp->left);
                }
            }

            if (temp ->right != NULL)
            {
                if(temp ->right->right != NULL)
                {
					Leaf_deletion_in_tree(temp->right);
                }
            }

            if (temp ->right != NULL)
            {

                if(temp ->right->left != NULL)
                {
                    Leaf_deletion_in_tree(temp->right);
                }

            }
        }

        int One_Chlid_of_parent_deletion(node *temp)
        {
        	if (root == NULL)
        	{
        		cout << "There is no Tree exist" << endl;
        	}
        	if (((temp->left->left != NULL)&& (temp->left->right == NULL)) || ((temp->left->left == NULL) && (temp->right ->right != NULL)))
        	{
        		if (temp ->left ->info == number)
        		{
        			cout << "I found it " << endl;
        		}
        	}
        	if (((temp->right->left != NULL)&& (temp->right->right == NULL)) || ((temp->right->left == NULL) && (temp->right ->right != NULL)))
        	{
        		if (temp ->right->info == number)
        		{
        			cout << "I found it " << endl;
        		}
        	}

        	 if(temp->left!= NULL)
            {    
                if(temp ->left->right != NULL)
                {
                    One_Chlid_of_parent_deletion(temp->left);
                }
            }
            if(temp->left!= NULL)
            {

                if(temp ->left->left != NULL)
                {
                    One_Chlid_of_parent_deletion(temp->left);
                }
            }

            if (temp ->right != NULL)
            {
                if(temp ->right->right != NULL)
                {
					One_Chlid_of_parent_deletion(temp->right);
                }
            }

            if (temp ->right != NULL)
            {

                if(temp ->right->left != NULL)
                {
                    	One_Chlid_of_parent_deletion(temp->right);
                }

            }

        }
        int One_Chlid_of_parent(node *temp)
        {
            if((temp->left != NULL && temp->right == NULL)|| (temp->left == NULL && temp->right != NULL))
            {
                counter = counter + 1;
            }
            if (temp->left != NULL)
            {
                One_Chlid_of_parent(temp->left);
            }
            if(temp->right != NULL)
            {
                One_Chlid_of_parent(temp->right);
            }

            return counter;
        }
        int In_order(node *temp)
        {
            if(root == NULL)
            {
                cout << "There is no Tree Implemented " << endl;
                return 0;
            }
            if(temp->left != NULL)
            {
                In_order(temp->left);
            }
            cout << temp -> info << endl;
            if(temp->right != NULL)
            {
                In_order(temp->right);
            }
        }

};

int main ()
{
    cout << "Here we go for the Tree Implementation" << endl;
    Tree_implementation T1;
    for (int i = 0; i < 8; i++)
    {
    		cout << "Enter the number" << endl;
        	cin >> T1.number;
        	T1.Inserting_Tree(T1.root);	
		
    }
    cout << "Here is your Tree Printing " << endl;
    T1.In_order(T1.root);

    // cout << "Enter the number which you want to Search it" << endl;
    // cin >> T1.number;
    // T1.Searching(T1.root);

    cout << "Total Number of leaf is " << endl;
    int counter =0;
    counter = T1.Number_of_leaf(T1.root);
    cout << counter << endl;

    // cout << "Total Number of Parent whose having one Child" << endl;
    // counter =0; counter = T1.One_Chlid_of_parent(T1.root); cout << counter
    // << endl;

    // cout << "Which value you want to delete " << endl;
    T1.number    =25;
   // T1.leaf_deletion_in_tree(T1.root);
   // if (flag != 1)
   // {
   		T1.One_Chlid_of_parent_deletion(T1.root);
   // }
   // if (flag != 2 and flag != 1)
   // {
   // 		cout << "There is no case " << endl;
   // }


}