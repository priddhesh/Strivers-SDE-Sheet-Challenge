int removeDuplicates(vector<int> &arr, int n) {
    int cnt = 0,i=0;    
	while(i<n)
	{
	   cnt++;
	   if(arr[i]==arr[i+1])
	   {
          while(arr[i]==arr[i+1])
	      {
             i++;
	      }
		  i++;
	   }else{
		   i++;
	   }
	   
	}
	return cnt;
}
