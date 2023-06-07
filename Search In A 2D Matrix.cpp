bool searchMatrix(vector<vector<int>>& mat, int target) {
     int idx = -1;
     int n = mat.size(),m = mat[0].size();
     for(int i=0;i<n;i++)
     {
        if(mat[i][0]<=target && mat[i][m-1]>=target)
        {
           idx = i;
        }
     }
     if(idx==-1)
     {
         return false;
     }  
     int low = 0,high = m-1;
     if(mat[idx][low]==target || mat[idx][high]==target)
     {
         return true;
     }
     while(low<=high)
     {
        int mid = (low+high)/2;
        if(mat[idx][mid]==target)
        {
            return true;
        }
        if(mat[idx][mid]>target)
        {
            high = mid-1;
        }else{
            low = high +1;
        }
     } 
     return false;
}
