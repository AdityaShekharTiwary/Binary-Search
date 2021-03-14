int solve(vector<vector<int>>& intervals, int point) {
    if(intervals.size()==0)  return 0;
    int cnt=0;
    int n=intervals.size();
    for(int i=0;i<n;i++){
            if(point>=intervals[i][0] && point<=intervals[i][1])
            cnt++;
    }
    return cnt;
}