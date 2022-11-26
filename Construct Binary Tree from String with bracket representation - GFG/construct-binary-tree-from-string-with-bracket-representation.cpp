//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
   Node *treeFromString(string str){

        // code here

        int n=str.length();

        stack<Node*>st;

        bool left_done=false;

        

        for(int i=0;i<n;i++){

            if(st.empty()){

                int val=0;

                while(i<n && ((str[i]!='(') && (str[i]!=')'))){

                    val=val*10+(str[i]-48);

                    i++;

                }

                i--;

                

                Node *t=new Node(val);

                st.push(t);

            }

            else if(left_done && str[i]=='('){

                ++i;

                int val=0;

                while(i<n && ((str[i]!='(') && (str[i]!=')'))){

                    val=val*10+(str[i]-48);

                    i++;

                }

                i--;

                

                Node *t=new Node(val);

                Node *temp=st.top();

                temp->right=t;

                st.push(t);

                left_done=false;

            }

            else if(str[i]=='('){

                ++i;

                int val=0;

                while(i<n && ((str[i]!='(') && (str[i]!=')'))){

                    val=val*10+(str[i]-48);

                    i++;

                }

                i--;

                Node *t=new Node(val);

                Node *temp=st.top();

                temp->left=t;

                st.push(t);

            }

            else{

                st.pop();

                left_done=true;

            }

            // cout<<st.size()<<endl;

        }

        Node *ans=st.top();

        return ans;

    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends