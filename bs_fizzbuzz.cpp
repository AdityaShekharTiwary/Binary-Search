vector<string> solve(int n) {
    vector<string> res;
    for(int i=1;i<=n;i++){
        if(i%5==0 && i%3==0) res.push_back("FizzBuzz");
        else if(i%3==0) res.push_back("Fizz");
        else if(i%5==0) res.push_back("Buzz");
        else{
            string x=to_string(i);
             res.push_back(x);
        }
    }
    return res;
}