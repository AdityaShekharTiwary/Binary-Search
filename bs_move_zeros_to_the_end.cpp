vector<int> solve(vector<int>& nums) {
   vector<int> res;
   int n=nums.size();
   int cnt=0;
   for(int i=0;i<n;i++){
       if(nums[i]!=0) res.push_back(nums[i]);
       else cnt++;
   }
   while(cnt--) res.push_back(0);
   return res;
}