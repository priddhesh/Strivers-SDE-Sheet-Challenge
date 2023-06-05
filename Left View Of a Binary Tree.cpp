#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void leftView(TreeNode<int> *root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int sz = q.size();
        for(int i= 0;i<sz;i++)
        {
           TreeNode<int>*k = q.front();
           q.pop();
           if(i==0)
           {
               ans.push_back(k->data);
           }
           if(k->left)
           {
               q.push(k->left);
           }
           if(k->right)
           {
               q.push(k->right);
           }
        }
    }
}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    leftView(root,ans);
    return ans;
}
