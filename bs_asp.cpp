bool solve(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int d=nums[1]-nums[0];
    for(int i=0;i<n-1;i++){
        if(nums[i+1]-nums[i]!=d) return false;
    }
    return true;
}