int solve(string s) {
    stringstream help(s);
    int N;
    help>>N;
    if(N!=0) { 
        int dec=0, 
        i=0,rem;  
        while(N!= 0) { 
            rem=N%10; 
            N/=10; 
            dec+=rem*pow(3, i); 
            ++i; 
        } 
        return dec; 
    } 
    else return 0; 
}