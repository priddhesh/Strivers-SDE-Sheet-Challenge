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
void findKLargest(TreeNode<int> *root,int &k,int &x)
{ 
    if(root==NULL) return;

    findKLargest(root->right,k,x);
    k--;
    if(k==0)
    {
        x =  root->data;
        return;
    }
    findKLargest(root->left,k,x);
}

int KthLargestNumber(TreeNode<int>* root, int k) 
{
    int x = -1;
	findKLargest(root,k,x);
    return x;
}
