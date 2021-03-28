vector<int> solve(vector<vector<int>>& lists) {
    vector<int>res;
    for(int i=0;i<lists.size();i++){
        for(int j=0;j<lists[i].size();j++){
            res.push_back(lists[i][j]);
        }
    }
    sort(res.begin(),res.end());
    return res;
}