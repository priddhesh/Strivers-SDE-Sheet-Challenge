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
void solve(TreeNode<int> * root,int &x,int &min,int &ans)
{
    if(root==NULL) return;
    solve(root->left,x,min,ans);
    if(root->val<=x)
    {
       if((x-root->val)<min)
       {
           if(x==root->val)
           {
               ans = x;
               return;
           }
           min = x-root->val;
           ans = root->val;
       }
    }
    solve(root->right,x,min,ans);
}
int floorInBST(TreeNode<int> * root, int X)
{
   int min = INT_MAX,ans = -1;
   solve(root,X,min,ans);
   return ans;
}
