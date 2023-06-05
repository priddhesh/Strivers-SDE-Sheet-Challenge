string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans = "";
    for(int i=0;i<arr[0].size();i++)
    {
        char c = arr[0][i];
        int cnt = 0;
        for(int j = 0;j<n;j++)
        {
            if(arr[j][i]==c)
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            ans+=c;
        }else{
            return ans;
        }
    }
    return "";
}


