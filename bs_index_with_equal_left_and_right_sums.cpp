int solve(vector<int>& nums) {
   int left = 0;
    int right = 0;
    int sz=nums.size();
    for (int i = 1; i < sz; i++) {
        right += nums[i];
    }

    int cur = nums[0];
    int idx = 0;
    while (left != right && (idx + 1) < sz) {
        left += cur;
        idx++;
        cur = nums[idx];
        right -= cur;
    }

    return left == right ? idx : -1;
}