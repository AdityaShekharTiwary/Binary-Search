bool solve(vector<string>& moves, int x, int y) {
    int n=moves.size();
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(moves[i]=="NORTH") a++;
        else if(moves[i]=="SOUTH")a--;
        else if(moves[i]=="EAST") b++;
        else if(moves[i]=="WEST") b--;
    }
    if(b==x && a==y) return true;
    else return false;
}