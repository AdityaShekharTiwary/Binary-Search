bool solve(int n) {
    if(n==0) return false;
    vector<int>t;
    while(n>0){
        t.push_back(n%2);
        n=n/2;
    }
    reverse(t.begin(),t.end());
    int cnt=0,ans=0;
    for(int i=0;i<t.size();i++){
        if(t[i]==1) cnt++;
        if(cnt>1) return false;
    }
    return true;
}