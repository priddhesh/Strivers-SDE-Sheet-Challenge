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
int findPos(int val,vector<int>&inorder)
{
    for(int i=0;i<inorder.size();i++)
    {
        if(val == inorder[i])
        {
            return i;
        }
    }
    return -1;
}
TreeNode<int>* solve(vector<int> &inorder, vector<int> &preorder,int &idx,int st,int end)
{
    if(idx>=inorder.size() || st>end)
    {
        return NULL;
    }
    int val = preorder[idx++];
    TreeNode<int>* root = new TreeNode<int>(val);
    int pos = findPos(val,inorder);
    root->left = solve(inorder,preorder,idx,st,pos-1);
    root->right = solve(inorder,preorder,idx,pos+1,end);

    return root;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	int idx = 0,n = preorder.size();
    return solve(inorder,preorder,idx,0,n-1);
}
