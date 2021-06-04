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
        node *temp1;
        node *extra;
        node *extra1;
        node *extra_temp;
        int counter ;
        int flag;
        int fl;
        int fl1;
        int bhl;
        int bhr;
        int height_left;
        int height_right;
        int Balance_factor;
        int Case1;
        int Case2;
        int Case3;
        int Case4;
        int root_flag;
    public:
        node *root;
        int number;
        Tree_implementation(){
            temp = NULL;
            root_flag = 0;
            temp1 = NULL;
            root = NULL;
            extra = NULL;
            extra1 = NULL;
            extra_temp=NULL;
            counter = 0;
            flag = 0;
            fl = 0;
            fl1 = 0;
            bhl = 0;
            bhr = 0;
            height_right =0;
            height_left = 0;
            Balance_factor = 0;
            Case1 = 0;
            Case2 = 0;
            Case3 = 0;
            Case4 = 0;
        }
        int insertion_Avl (node *temp)
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

        		if (temp -> info > number)
        		{
        			if (temp->left == NULL)
        			{
        				temp->left = new node;
        				temp->left->info = number;
        				temp->left->left = NULL;
        				temp->left->right = NULL;
        				Balance_factor_computation(temp);
        				return 0;
        			}
	        		 else
	        		 {
	        		 	if(temp->left->info > number)
	        		 	{
	        		 		if (temp->left->left == NULL)
	        		 		{
	        		 			Case1 = 1;
	        		 		}
	        		 	}
	        		 	if(temp ->left->info < number)
	        		 	{
	        		 		if (temp->left->right == NULL)
	        		 		{
	        		 			Case2 = 1;
	        		 			Case1 = 0;
	        				}
	        		 	}
	        			insertion_Avl(temp->left);
	        			Balance_factor_computation(temp);
	        		}
	        	}

        		if(temp->info < number)
        		{
        			if (temp->right == NULL)
        			{
        				temp->right = new node;
        				temp->right->info = number;
        				temp->right->left = NULL;
        				temp->right->right = NULL;
        				Balance_factor_computation(temp);
        				return 0;
        			}
	        		else
	        		{
	        			if(temp->right->info <number)
	        			{
	        				if(temp->right->right == NULL)
	        				{
	        					Case4 = 1;
	        				}
	        			}
	        			if(temp->right->info >number)
	        			{
	        				if(temp->right ->left == NULL)
	        				{
	        					Case3 = 1;
	        				}
	        			}
	        			insertion_Avl(temp->right);
	        			Balance_factor_computation(temp);
	        		}
        		}
        }
 int Balance_heigh_tree (node *temp)
        {
                int right =0;
                int left = 0;
                if(temp->left != NULL)
                {
                        left = 1 + Balance_heigh_tree(temp->left);
                }
                if(temp->right != NULL)
                {
                        right = 1 + Balance_heigh_tree(temp->right);
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
        int Balance_factor_computation(node *temp)
        {
        	height_left = 0;
        	height_right =0;

        	cout << temp->info  << endl;
                if (temp ->left == NULL && temp ->right == NULL)
                {
                        cout << "There is no tree Avalible" << endl;
                        return 0;
                }
                if (temp ->left != NULL)
                {
                        height_left = 1 +Balance_heigh_tree(temp->left);      
                }
                if (temp ->right != NULL)
                {
                         height_right = 1 +Balance_heigh_tree(temp->right);
                }
                Balance_factor = height_left - height_right;
                if (Balance_factor == 1 || Balance_factor == 0 || Balance_factor == -1)
                {
            			return 0;
                }

                if((Balance_factor != 1 || Balance_factor != 0 || Balance_factor != -1))
          {      if (Case1 == 1)
                {
                	if (root == temp)
                	{
                		root_flag = 1;
                	}
                	correcting_case1(temp);
                	return 0;
                }
                
                if (Case2 == 1)
                {
                	if (root == temp)
                	{
                		root_flag = 1;
                	}
                	correcting_case2(temp);
                	return 0;
                }
                if (Case3 == 1)
                {
                	if (root == temp)
                	{
                		root_flag = 1;
                	}
                	correcting_case3(temp);
                	return 0;
                }
                if (Case4 == 1)
                {
                	if (root == temp)
                	{
                		root_flag = 1;
                	}
                	correcting_case4(temp);
                	return 0;
                }
			}
        }

        int correcting_case1 (node *temp)
        {
        	cout << "calling case1" << endl;
        	extra = NULL;
        	extra1 = NULL;
        	extra = temp;
        	if (root_flag == 1)
        	{
        		root = root->left;
	        	temp = temp ->left;
	        	if (temp -> right == NULL)
	        	{
	        		extra->left = NULL;
	        		temp->right = extra;
	        		
	        	}
	        	if (temp ->right != NULL)
	        	{
	        		extra->left = NULL;
	        		extra->left = temp->right;
	        		temp->right = extra;
	        	}
	        }
	        /// Else not working best 
        	else
        	{
        		cout << "I am in " << endl;
        		extra1 = root;
        		while(extra1->left != temp)
        		{
        			extra1 = extra1 -> left;
        		}
        		temp = temp->left;

        		if (temp -> right == NULL)
        		{
        			temp->right = extra;
        			 extra->left = NULL;
        			 extra1->left = temp;
        		}
        		if (temp->right != NULL)
        		{
        			extra->left = temp->right;
        			temp -> right = extra;
        			extra1->left= temp;
        		}
        	}
        }
        int correcting_case3(node *temp)
        {
        	if(root_flag==1)
        	{
        		temp = temp->right;
        		root->right = temp->left;
        		root->right->right = temp;
        		temp->right = NULL;

        		extra = temp;
        		root = root->right;
        		extra->right = NULL;
        		root->left = extra;
        		return 0;
        	}
        	extra_temp = root;
        	extra = temp;
        	if(root==NULL)
        	{
        		cout<<"Tree is empty"<<endl;
        	}
        	temp = temp->right;

        	while(extra_temp->right != extra)
        	{
        		extra_temp = extra_temp->right;
        	}
        	extra->right = NULL;
        	extra->right = temp->left;
        	temp->left = NULL;
        	extra->right->right = temp;

        	temp = extra->right;
        	extra_temp->right = NULL;
        	extra->right = NULL;
        	temp->left = extra;
        	extra_temp->right = temp;
        }
        int correcting_case2(node *temp)
        {
        	if(root_flag==1)
        	{
        		temp=temp->left;
        		root->left = temp->right;
        		root->left->left = temp;
        		temp->left = NULL;

        		extra = root;
        		root = root->left;
        		extra->left = NULL;
        		root->right = extra;
        		return 0;
        	}

        	extra_temp = root;
        	extra = temp;

        	if(root == NULL)
        	{
        		cout<<" Tree is empty "<<endl;
        	}

        	temp = temp->left;

        	while(extra_temp->left != extra)
        	{
        		extra_temp = extra_temp->left;
        	}

        	extra->left = NULL;
        	extra->left = temp->right;
        	temp->right = NULL;
        	extra->left->left = temp;

        	temp = extra->left;
        	extra_temp->left = NULL;
        	extra->left = NULL;
        	temp->right = extra;
        	extra_temp->left = temp;

        }
        int correcting_case4(node *temp)
        {
        	extra = temp;
        	if(root_flag == 1)
        	{
        		root = root->right;
        	}
        	temp = temp->right;

        	if(temp->left == NULL)
        	{
        		extra->right = NULL;
        		temp->left = extra;

        	}

        	if(temp->left != NULL)
        	{
        		extra->right = NULL;
        		extra->right = temp->left;
        		temp->left=extra;
        	}
        	else
        	{
        		extra1 = root;
        		while(extra1->right != temp)
        		{
        			extra1 = extra1->right;
        		}
        		temp = temp->right;
        		extra->right = temp;

        		if(temp->left == NULL)
        		{
        			temp->left = extra;
        			extra->right = NULL;
        		}
        		if(temp->left != NULL)
        		{
        			extra->right = temp->left;
        			temp->left = extra;
        		}
        	}
        }
};
int main(){
    Tree_implementation T1;
    for (int i = 0; i < 5; i++)
    {
    		cout << "Enter the number" << endl;
        	cin >> T1.number;
        	T1.insertion_Avl(T1.root);
    }
}