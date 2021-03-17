vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n=matrix.size();
    vector<vector<int>> res;
    vector<int> t;
    for(int i=0;i<n;i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==1) t.push_back(0);
            if(matrix[i][j]==0) t.push_back(1);
        }
        reverse(t.begin(),t.end());
        res.push_back(t);
        t.clear();
    }
    return res;
}