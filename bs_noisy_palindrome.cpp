bool solve(string s) {
    string t;
    for(int i=0;i<s.size();i++){
        if((s[i]>='0' && s[i]<='9') || s[i]>='A' && s[i]<='Z') continue;
        else t+=s[i];
    }
    for(int i=0;i<t.size();i++){
        if(t[i]!=t[t.size()-1-i]) return false;
    }
    return true;
}