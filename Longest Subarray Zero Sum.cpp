#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
    int size = 0;
    for(int i=0;i<arr.size();i++)
    {
        int sum = 0;
        for(int j= i;j<arr.size();j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                if((j-i+1)>size)
                {
                    size = j-i+1;
                }
            }
        }
    }
    return size;
}
