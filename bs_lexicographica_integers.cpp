vector<int> solve(int n) {
    vector<string> t;
    for(int i=1;i<=n;i++) t.push_back(to_string(i));
    sort(t.begin(),t.end());
    vector<int> res;
    for(int i=0;i<n;i++) res.push_back(stoi(t[i]));
    return res;
}