string reverseString(string &str) {
  vector<string> v;
  string s = "",ans="";
  for (int i = 0; i < str.size(); i++) {
    if (str[i] ==' ') {
      if (s != "") {
        v.push_back(s);
		s="";
      }
    }else{
		s+=str[i];
	}
  }
  if(s!="")
  {
	  v.push_back(s);
  }
  reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
	  ans+=v[i];
	  if(i!=v.size()-1)
	  {
		  ans+=" ";
	  }
  }
  return ans;
}
