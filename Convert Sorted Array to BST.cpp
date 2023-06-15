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
TreeNode<int>* solve(vector<int>&arr,int left,int right)
{
    if(left>right) return NULL;
    int mid = (left+right)/2;
    TreeNode<int>*root = new TreeNode<int>(arr[mid]);

    root->left = solve(arr,left,mid-1);
    root->right = solve(arr,mid+1,right);

    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    return solve(arr,0,n-1);
}
