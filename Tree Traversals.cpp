#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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
    };


************************************************************/
void inorder(BinaryTreeNode<int>*root,vector<int>&v)
{
    if(root==NULL) return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
void preorder(BinaryTreeNode<int>*root,vector<int>&v)
{
    if(root==NULL) return;
    v.push_back(root->data);
    preorder(root->left,v);
    preorder(root->right,v);
}
void postorder(BinaryTreeNode<int>*root,vector<int>&v)
{
    if(root==NULL) return;
    postorder(root->left,v);
    postorder(root->right,v);
    v.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<vector<int>>ans;
    vector<int>v;
    inorder(root,v);
    ans.push_back(v);
    v.clear();
    preorder(root,v);
    ans.push_back(v);
    v.clear();
    postorder(root,v);
    ans.push_back(v);
    return ans;
}
