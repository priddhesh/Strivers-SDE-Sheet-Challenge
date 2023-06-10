#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void inorder(BinaryTreeNode<int>* root,vector<int>&v)
{
    if(root==NULL) return;
    
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    vector<int>v;
    inorder(root,v);
    if(v.size()<=1) return {-1,-1};
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key)
        {
            if(i==0)
            {
                return {-1,v[i+1]};
            }else if(i==v.size()-1)
            {
                return {v[i-1],-1};
            }else{
              return {v[i - 1], v[i + 1]};
            }
        }
    }
    return {-1,-1};
}
