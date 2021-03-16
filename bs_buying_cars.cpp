int solve(vector<int>& prices, int k) {
    sort(prices.begin(),prices.end());
    int n=prices.size();
    int cnt=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=prices[i];
        if(sum<=k) cnt++;
    }
    return cnt;
}