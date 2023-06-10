#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
void solve(BinaryTreeNode<int> *root,vector<int>&v)
{
    if(root==NULL) return;

    solve(root->left,v);
    v.push_back(root->data);
    solve(root->right,v);
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    vector<int>v;
    solve(root,v);
    int low = 0,high = v.size()-1;
    while(low<high)
    {
        if(v[low]+v[high]==k)
        {
            return true;
        }else if(v[low]+v[high]>k){
            high--;
        }else{
            low++;
        }
    }
    return false;
}
