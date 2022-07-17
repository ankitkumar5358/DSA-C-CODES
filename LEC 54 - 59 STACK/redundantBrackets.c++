#include<stack>

bool findRedundantBrackets(string &s)
{
   stack<char> st;
   for(int i=0; i<s.length(); i++){
       char ch = s[i];
       // opening or operator case
       if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
           st.push(ch);
       }
       // cloing bracket or lowercase letter
       else{

           if(ch == ')'){
               bool isRedundant = true;
           while(st.top() != '(')    {
               char top = st.top();
               if(top == '(' || top == '+' || top == '-' || top == '*' || top == '/')  {
                   isRedundant = false;
               }
               st.pop();
           }
           if(isRedundant == true)
               return true;
           st.pop();
       }
      }
   }
    return false;
}
