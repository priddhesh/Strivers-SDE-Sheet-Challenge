#include<bits/stdc++.h>

void dfs(int i,unordered_map<int,bool>&vis,unordered_map<int,list<int>>&adj,vector<vector<int>>&ans,vector<int>&v)
{
    vis[i] = true;
    v.push_back(i);
    for(auto it:adj[i])
    {
        if(!vis[it])
        {
            dfs(it, vis,adj,ans,v);
        }
    }
    return;
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int,bool>vis;
    unordered_map<int,list<int>>adj;
    vector<vector<int>>ans;
    vector<int>v;
    for(int i=0;i<E;i++)
    {
        int a = edges[i][0],b = edges[i][1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            dfs(i, vis, adj, ans,v);
            ans.push_back(v);
            v.clear();
        }
    }
    return ans;
}
