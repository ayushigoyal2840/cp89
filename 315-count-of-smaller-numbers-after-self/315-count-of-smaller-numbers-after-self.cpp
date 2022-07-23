class Solution {
public:
    struct Node{
        int data;
        struct Node *left,*right;
        int lc;
        Node(int data)
        {
            this->data=data;
            left=right=NULL;
            lc=0;
        }
    };
    int add(struct Node* node, int key)
    {
        struct Node* r=NULL , *p;
        int c=0;
        while(node!=NULL)
        {
            r=node;
            if(node->data >= key)
            {
                node->lc = node->lc+1;
                node=node->left;
            }
            else if(node->data < key)
            {
                c+=(node->lc)+1;
                node=node->right;
            }
        }
        p=new Node(key);
        if(p->data<=r->data)
            r->left = p;
        else
            r->right=p;
        return c;
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int>vect(n,0);
        int j=1;
        while(j<n and nums[j-1]<=nums[j]) j++;
        if(j==n) return vect;
        j=n-2;
        while(j>-1 and nums[j]>=nums[j+1])
        {
            if(nums[j]>nums[j+1])
                vect[j]=n-j-1;
            if(nums[j]==nums[j+1])
                vect[j]=vect[j+1];
            j--;
        }
        if(j==-1)
            return vect;
        struct Node* root = new Node(nums[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            vect[i]=add(root,nums[i]);
        }
        return vect;
    }
};