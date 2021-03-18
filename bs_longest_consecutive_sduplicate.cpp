int solve(string s) {
    int n=s.size();
    if(n==0) return 0;
    int cnt=1,ans=1;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]) cnt++;
        else {
            ans=max(cnt,ans);
            cnt=1;
        }
    }
    return ans;
}