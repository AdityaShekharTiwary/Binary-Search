int solve(vector<int>& nums, int target) {
    int n=nums.size();
    int l=0,r=n-1;
    sort(nums.begin(),nums.end());
    int sum=0,maxval=INT_MIN;
    while(l<r){
        sum=nums[l]+nums[r];
        if(sum<target){
            maxval=max(maxval,sum);
            l++;
        } 
        else r--;
        
    }
        return maxval;
}