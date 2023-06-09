#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    vector<int>ans;
    map<int,int>mp;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    q.push({root, 0});
    while(!q.empty())
    {
        int sz = q.size();
        for(int i=0;i<sz;i++)
        {
            BinaryTreeNode<int>*k = q.front().first;
            int x = q.front().second;
            q.pop();
            mp[x] = k->data;
            if(k->left)
            {
                q.push({k->left,x-1});
            }
            if(k->right)
            {
                q.push({k->right,x+1});
            }
        }
    }
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
