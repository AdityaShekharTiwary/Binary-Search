int solve(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==i) return i;
    }
    return -1;
}