#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long max = (long long)arr[0],sum = (long long)arr[0];
    for(int i=1;i<n;i++)
    {
        sum += (long long)arr[i];
        if(sum<(long long)arr[i]) 
        {
            sum = (long long)arr[i];
        }
        if(sum>max)
        {
            max = sum;
        }
    }
    return max<0?0:max;
}
