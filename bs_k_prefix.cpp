int solve(vector<int>& nums, int k) {
    int n=nums.size();
    int maxi=-1,sum=0,flag=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>k){
            if(flag) maxi=i-1;
             flag=0;
        }
        else flag=1;
    }
    if(flag) maxi=n-1;
    return maxi;
}