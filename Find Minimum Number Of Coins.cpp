#include <bits/stdc++.h> 

int findMinimumCoins(int amount) 
{
    vector<int>curr = {1,2,5,10,20,50,100,500,1000};
    int min = 0,k=curr.size()-1;
    while(amount>0)
    {
        if(curr[k]>amount)
        {
            k--;
        }else{
            min++;
            amount-=curr[k];
        }
    }
    return min;
}
