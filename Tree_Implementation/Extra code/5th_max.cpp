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
        int No_of_node;
    public:
        node *root;
        int number;
        Tree_implementation(){
            temp = NULL;
            root = NULL;
            counter = 0;
            flag = 0;
            No_of_node =0;
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

        int find_No_node (node *temp)
        {
            if (temp->left != NULL)
            {
                find_No_node(temp->left);
            }
            No_of_node ++;

            if (temp->right != NULL)
            {
                find_No_node(temp->right);
            }
        }

        int Putting_into_array (node *temp)
        {
            if (temp->left != NULL)
            {

                cout << Putting_into_array(temp->left);
               
            }

            if (temp->right != NULL)
            {
                Putting_into_array(temp->right);
            }
        }


        int max_finding(node *temp)
        {
            find_No_node(temp);

            int *array = new int [No_of_node];
            cout << "The number node is " <<  No_of_node << endl;
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
    T1.Putting_into_array(T1.root);

}