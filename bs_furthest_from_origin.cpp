int solve(string s) {
    int n=s.size();
    int cnt=0,a=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L') cnt--;
        else if(s[i]=='R') cnt++;
        else a++;
    }
    return abs(cnt)+a;
}
