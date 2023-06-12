#include<bits/stdc++.h>
bool isCyclic(int i,unordered_map<int,bool>&vis,unordered_map<int,list<int>>&adj)
{
    unordered_map<int,int>parent;
    parent[i] = -1;
    vis[i] = 1;
    queue<int>q;
    q.push(i);
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        for(auto it:adj[k])
        {
            if(vis[it]==true && parent[k]!=it)
            {
                return true;
            }else if(!vis[it])
            {
                vis[it] = true;
                q.push(it);
                parent[it] = k;
            }
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int,list<int>>adj;
    for(int i=0;i<m;i++)
    {
         int v = edges[i][0];
         int u = edges[i][1];

         adj[u].push_back(v);
         adj[v].push_back(u);
    }

    unordered_map<int,bool>vis;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
           bool ans = isCyclic(i,vis,adj);
           if(ans==true)
           {
               return "Yes";
           }
        }
    }
    return "No";
}
