bool solve(vector<vector<int>>& votes) {
    int n=votes.size();
    int hash[100000]={0};
    for(int i=0;i<n;i++){
        hash[votes[i][1]]++;
    }
    for(int i=0;i<100000;i++){
        if(hash[i]>1) return true;
    }
    return false;
}