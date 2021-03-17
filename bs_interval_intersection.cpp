vector<int> solve(vector<vector<int>>& intervals) {
    vector<int> res,t;
    int n=intervals.size();
    for(int i=0;i<n;i++){
        t.push_back(intervals[i][0]);
        t.push_back(intervals[i][1]);
    }
    sort(t.begin(),t.end());
    int m=t.size();
    res.push_back(t[m-n-1]);
    res.push_back(t[m-n]);
    return res;
}