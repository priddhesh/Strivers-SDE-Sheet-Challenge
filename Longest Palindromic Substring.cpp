string longestPalinSubstring(string s)
{
     int end = 0,st=0,max =1;
        for(int i = 0;i<s.size();i++)
        {
            int a = i,b=i;
            while(a>=0 && b<s.size())
            {
                if(s[a]==s[b])
                {
                    a--;
                    b++;
                }else{
                    break;
                }
            }
            if((b-a-1)>max)
            {
            max = (b-a-1);
            st = a+1;
            end = b-1;
            }
        }
        for(int i = 0;i<s.size();i++)
        {
            int a = i,b=i+1;
            while(a>=0 && b<s.size())
            {
                if(s[a]==s[b])
                {
                    a--;
                    b++;
                }else{
                    break;
                }
            }
            if((b-a-1)>max)
            {
            max = (b-a-1);
            st = a+1;
            end = b-1;
            }
        }
        return s.substr(st,max);
}
