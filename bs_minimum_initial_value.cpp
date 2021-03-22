int solve(vector<int>& nums) {
   int ans=0,temp=0;
   for(int &x:nums){
       temp+=x;
       ans=min(temp,ans);
   }
   return -1*ans+1;
}