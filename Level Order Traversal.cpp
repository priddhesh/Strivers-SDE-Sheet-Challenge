#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(BinaryTreeNode<int>*root,vector<int>&ans)
{
        queue<BinaryTreeNode<int>*>q;
        if(!root) return;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                BinaryTreeNode<int>* temp = q.front();
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                ans.push_back(temp->val);
            }
        }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    solve(root,ans);
    return ans;
}
