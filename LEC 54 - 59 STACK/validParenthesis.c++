class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    for(int i=0; i<s.length();i++){
        char ch = s[i];
        // opening bracket, stack  push
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        //closing bracket, stack top, check and pop
        else{
            if(!st.empty()){
                char top = st.top();
                if(  (ch == ')' && top == '(') ||
                     (ch == ']' && top == '[') ||
                     (ch == '}' && top == '{')
                  ) {
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }

        }
    }
    if(st.empty())
        return true;
    else
        return false;
    }
};
