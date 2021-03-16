int solve(vector<int>& nums) {
    vector<int> d;
    int n=nums.size();
    for(int i=0;i<n;i++){
        d.push_back(nums[i]);
    }
    sort(d.begin(),d.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        if(d[i]==nums[i]) cnt++;
    }
    return cnt;
}