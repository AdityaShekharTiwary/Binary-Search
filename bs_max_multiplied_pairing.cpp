int solve(vector<int>& nums, vector<int>& muls) {
     sort(nums.begin(),nums.end());
     sort(muls.begin(),muls.end());

        int nums_l = 0;
        int nums_r = nums.size() - 1;

        int muls_l = 0;
        int muls_r = muls.size() - 1;
        int res = 0;
        while (nums_l <= nums_r && muls_l <= muls_r) {
            int cand1 = nums[nums_l] * muls[muls_l];
            int cand2 = nums[nums_r] * muls[muls_r];

            if (cand1 > cand2) {
                res += cand1;
                nums_l++;
                muls_l++;
                continue;
            }
            res += cand2;
            nums_r--;
            muls_r--;
        }
        return res;
}