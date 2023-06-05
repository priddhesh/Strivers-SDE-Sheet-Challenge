bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char>st;
    for(int i=0;i<expression.size();i++)
    {
      if (st.empty() || expression[i]=='[' || expression[i]=='{' || expression[i]=='(') {
        st.push(expression[i]);
      }
      else if ((expression[i] == ']' && st.top() == '[') ||
          (expression[i] == '}' && st.top() == '{') ||
          (expression[i]==')' && st.top()=='('))
          {
              st.pop();
          }
          else{
              st.push(expression[i]);
          }
    }
    if(st.empty())
    {
        return true;
    }
    return false;
}
