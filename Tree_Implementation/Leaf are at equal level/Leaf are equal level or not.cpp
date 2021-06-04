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
       
        int leave_counter;
        int left_hei;
        int height;
    public:
        node *root;
         int flag1;
        int number;
        Tree_implementation(){
            temp = NULL;
            root = NULL;
            counter = 0;
            flag = 0;
            left_hei =0;
            flag1 =0;
            height =0;
            leave_counter =0;
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

    int Leaf_level_equal(node *temp,int left_hei1)
    {
    	if(temp->left != NULL)
    	{
    		height++;
    		Leaf_level_equal(temp->left,left_hei1);
    		height--;
    	}
    	if (temp->left == NULL && temp ->right == NULL)
    	{
    		if (height == left_hei1)

    		{
    			if (flag == 0)
    			{
    				flag1 =1;
    			 	// cout << "Leaf are at the same leave " << endl;
    				return 0;
    			}
    		}
    		else{
    			flag1 =0;
    			flag =1;
    			// cout << "Leaf are not at the same leave " << endl;
    			exit;
    			return 0;
    		}
    	}

    	if (temp->right != NULL)
    	{
    		height++;
    		Leaf_level_equal(temp->right,left_hei1);
    		height--;
    	}
    	
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
            cout << temp -> info << "  ";
            if(temp->right != NULL)
            {
                In_order(temp->right);
            }
        }

    int left_height(node *temp)
    {
    			int right =0;
                int left = 0;
                if(temp->left != NULL)
                {
                        left = 1 + left_height(temp->left);
                }
                if(temp->right != NULL)
                {
                        right = 1 + left_height(temp->right);
                }
                if (temp ->left == NULL && temp ->right == NULL)
                {
                        return 0;
                }
                if(left > right)
                {
                        return left++;
                }

                if(right == left)
                {
                        return left++;
                }
                if(right > left)
                {
                        return right++;
                }   
                if (temp ->left == NULL)
                {
                        return 0;
                }    
                if (temp -> right == NULL)
                {
                        return 0;
                }
    }
};

int main(){
	Tree_implementation T1;
	int counter =0;
	for(int i=0;i<11;i++){
		cout << "Enter the number" << endl;
        	cin >> T1.number;
		T1.Inserting_Tree(T1.root);
	}
	cout << endl;
	cout << endl;
	cout << "-----------------------------" << endl;
	cout << endl;
	cout << "Here is Required Tree " << endl;
	T1.In_order(T1.root);
	cout << endl;
	cout << endl;
	cout << "-----------------------------" << endl;
	cout << endl;
	cout << "Left height is " << endl;
	counter =  T1.left_height(T1.root) ;
	cout << counter << endl;
	cout << endl;
	cout << "-----------------------------" << endl;
	cout << endl;
	T1.Leaf_level_equal(T1.root,counter);
	if (T1.flag1 == 0)
	{
		cout << "Leaf leave are not at same level" << endl;
	}
	else{
		cout << "leaf are at same level " << endl;
	}
	// cout << T1.Leaf_level_equal(T1.root )<< endl;
	// cout << endl;
	cout << "-----------------------------" << endl;
	cout << endl;
	

}