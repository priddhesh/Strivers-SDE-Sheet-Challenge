/************************************************************

    Following is the TreeNode class structure:

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
#include <bits/stdc++.h> 

vector<int> getTopView(TreeNode<int> *root) {
        vector<int>ans;
        map<int,int>mp,m;
        if(root==NULL) return ans;
        queue<pair<TreeNode<int>*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int k = q.size();
            for(int i=0;i<k;i++)
            {
                TreeNode<int>* a = q.front().first;
                int b = q.front().second;
                q.pop();
                if(mp[b]!=1)
                {
                    mp[b] = 1;
                    m[b] = a->val; 
                }
                if(a->left)
                {
                    q.push({a->left,b-1});
                }
                if(a->right)
                {
                    q.push({a->right,b+1});
                }
            }
        }
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
}
