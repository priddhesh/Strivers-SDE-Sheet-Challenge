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

void findKSmallest(TreeNode<int> *root,int &k,int &x)
{ 
    if(root==NULL) return;

    findKSmallest(root->left,k,x);
    k--;
    if(k==0)
    {
        x =  root->data;
        return;
    }
    findKSmallest(root->right,k,x);
}
int kthSmallest(TreeNode<int> *root, int k)
{
    int x = 0;
	findKSmallest(root,k,x);
    return x;
}
