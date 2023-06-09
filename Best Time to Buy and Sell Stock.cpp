#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    stack<int>st;
    int max = 0;
    for(int i=0;i<prices.size();i++)
    {
        if(st.empty())
        {
            st.push(prices[i]);
        }else if(prices[i]>st.top())
        {
            if(prices[i]-st.top()>max)
            {
                max = prices[i]-st.top();
            }
        }else{
          if (st.top() > prices[i]) {
            st.push(prices[i]);
          }
        }
    }
    return max;
}
