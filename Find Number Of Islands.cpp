void dfs(int** arr,vector<vector<int>>&vis,int i,int j,int n,int m)
{
   vis[i][j]= 1;
   if((i-1)>=0 && arr[i-1][j]==1 && vis[i-1][j]!=1 )
   {
      dfs(arr,vis,i-1,j,n,m);
   }
   if((j-1)>=0 && arr[i][j-1]==1 && vis[i][j-1]!=1 )
   {
      dfs(arr,vis,i,j-1,n,m);
   }
   if((i+1)<n && arr[i+1][j]==1 && vis[i+1][j]!=1 )
   {
      dfs(arr,vis,i+1,j,n,m);
   }
   if((j+1)<m && arr[i][j+1]==1 && vis[i][j+1]!=1 )
   {
      dfs(arr,vis,i,j+1,n,m);
   }
   if((j-1)>=0 && (i-1)>=0 && arr[i-1][j-1]==1 && vis[i-1][j-1]!=1 )
   {
      dfs(arr,vis,i-1,j-1,n,m);
   }
   if((i+1)<n && (j+1)<m && arr[i+1][j+1]==1 && vis[i+1][j+1]!=1 )
   {
      dfs(arr,vis,i+1,j+1,n,m);
   }
   if((j-1)>=0 && (i+1)<n && arr[i+1][j-1]==1 && vis[i+1][j-1]!=1 )
   {
      dfs(arr,vis,i+1,j-1,n,m);
   }
   if((i-1)>=0 && (j+1)<m && arr[i-1][j+1]==1 && vis[i-1][j+1]!=1 )
   {
      dfs(arr,vis,i-1,j+1,n,m);
   }
}

int getTotalIslands(int** arr, int n, int m)
{
   int cnt=0;
   vector<vector<int>>vis(n,vector<int>(m,0));

   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         if(arr[i][j]==1 && vis[i][j]!=1)
         {
            dfs(arr,vis,i,j,n,m);
            cnt++;
         }
      }
   }
   return cnt;
}
