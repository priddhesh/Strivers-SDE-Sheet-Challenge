#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int getMaxWidth(TreeNode<int> *root)
{
    int max = INT_MIN;
    if(root==NULL) return 0;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int k = q.size();
        if(k>max)
        {
            max = k;
        }
        for(int i=0;i<k;i++)
        {
            TreeNode<int>*d = q.front();
            q.pop();
            if(d->left)
            {
                q.push(d->left);
            }
            if(d->right)
            {
                q.push(d->right);
            }
        }
    }
    return max;
}
