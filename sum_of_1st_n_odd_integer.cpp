int solve(int n) {
    int sum=0,cnt=0;
    for(int i=1;i<=100000;i+=2) {
        sum+=i;
        cnt++;
        if(cnt==n) break;
    }
    if(n==0) return 0;
    else return sum;
}