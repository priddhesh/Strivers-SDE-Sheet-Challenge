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
int findLCA(TreeNode<int>*root,int x,int y)
{
    if(root->data == x || root->data== y)
    {
        return root->data;
    }
    int left = 100000,right = 100000;
    if (root->left) {
      left = findLCA(root->left, x, y);
    }
    if (root->right) {
      right = findLCA(root->right, x, y);
    }
    if(left!=100000 && right!=100000)
    {
        return root->data;
    }
    return left!=100000?left:right;
}

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	return findLCA(root,x,y);
}
