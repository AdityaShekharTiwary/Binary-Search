int solve(vector<int>& nums, int k, int target) {
    int sum=0,res=0;
    for(int i=0;i<nums.size();i++) sum+=nums[i];
    if((sum-target)%k==0) res=abs(sum-target)/k;
    else res=abs(sum-target)/k+1;
    return res;
}