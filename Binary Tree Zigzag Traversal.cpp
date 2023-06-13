#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    if(!root) return ans;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    bool flag = true;
    while(!q.empty())
    {
        int k = q.size();
        stack<int>st;
        for(int i=0;i<k;i++)
        {
            BinaryTreeNode<int> *k = q.front();
            q.pop();
            if(flag)
            {
                ans.push_back(k->data);
            }
            else{
                st.push(k->data);
            }
            if(k->left)
            {
                q.push(k->left);
            }
            if(k->right)
            {
                q.push(k->right);
            }
        }
        if(!flag)
        {
          while(!st.empty())
          {
              ans.push_back(st.top());
              st.pop();
          }
        }
        flag = !flag;
    }
    return ans;
}
