int solve(int a) {
    int ans=1;
    for (int i=1;i<=a;i++) {
        ans=ans*i;
        if(ans==a) return i;
        if(ans>a) break;
    }
    return -1;
}