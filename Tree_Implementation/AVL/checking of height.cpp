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
        node *checking;
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
        int flg;
        int flgs;
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
            checking = NULL;
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
            flg =0;
            flgs = 0;
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

        	cout << "Calling Balance_factor_computation" << endl;
        	temp1 = temp;
                if (temp ->left == NULL && temp ->right == NULL)
                {
                        cout << "There is no tree Avalible" << endl;
                        return 0;
                }
               // if (temp ->left != NULL)
               // {     
                        cout << temp->left->info << endl;
                        height_left = Balance_heigh_tree(temp->left);        
               // }
                //if (temp ->right != NULL)
                //{
                         height_right = Balance_heigh_tree(temp->right);
                //}
        	
                cout << "The value of height_left" << height_left << endl;
                cout << "The value of height_right" << height_right << endl;

               // Balance_factor = height_left - height_right;
        	//cout << "The Balance factor of Tree is " << Balance_factor << endl;

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

int main(){

   cout << "Here we go for the Tree Implementation" << endl;
    Tree_implementation T1;
    for (int i = 0; i < 5; i++)
    {
                cout << "Enter the number" << endl;
                cin >> T1.number;
                T1.Inserting_Tree(T1.root);    
                
    }
    T1.In_order(T1.root);  
    T1.Balance_factor_computation(T1.root);

}