class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack <int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push('(');
            else if(s[i]=='{') st.push('{');
            else if(s[i]=='[') st.push('[');
            else if(!st.empty() && s[i]==']' && st.top()=='[') st.pop();
            else if(!st.empty() && s[i]=='}' && st.top()=='{') st.pop();
            else if(!st.empty() && s[i]==')' && st.top()=='(') st.pop();
            else return false;
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
