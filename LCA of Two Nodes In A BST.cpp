#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
TreeNode<int>*solve(TreeNode<int>*root, TreeNode<int>*P,TreeNode<int>*Q)
{
    if(P->data==root->data || Q->data == root->data) return root;

    TreeNode<int>*left = NULL;
    TreeNode<int>*right = NULL;

    if(root->left)
    {
        left = solve(root->left,P,Q);
    }
    if(root->right)
    {
        right = solve(root->right,P,Q);
    }
    if(left && right) return root;
    if(left) return left;
    return right;
}
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	return solve(root,P,Q);
}
