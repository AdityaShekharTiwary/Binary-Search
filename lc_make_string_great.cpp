class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++) {
            st.push(s[i]);
            while(!st.empty() && (st.top()==s[i+1]+32 || st.top()==s[i+1]-32)){
                st.pop();
                i++;
            }
        }
        string res="";
        while(!st.empty()) {
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};