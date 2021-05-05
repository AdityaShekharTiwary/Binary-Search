bool solve(vector<int>& nums) {
    int freq = 0, cnt = 0, mx = 0;
    for (auto x : nums) {
        if (x == 1) {
            freq++;
        }
    }
    for (auto x : nums) {
        if (x == 1) {
            cnt++;
        } else {
            mx = max(mx, cnt);
            cnt = 0;
        }
        mx = max(mx, cnt);
    }
    
    if (freq == mx) {
        return true;
    }
    return false;

}
