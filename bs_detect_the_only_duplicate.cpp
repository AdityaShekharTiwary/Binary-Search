int solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]) ans=nums[i];
    }
    return ans;
}