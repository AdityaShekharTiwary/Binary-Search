bool solve(vector<int>& nums, int k) {
    int n=nums.size();
    int l=0,r=n-1;
    while(l<r){
        if(nums[l]+nums[r]==k) return true;
        else if(nums[l]+nums[r]<k) l++;
        else r--;
    }
    return false;
}