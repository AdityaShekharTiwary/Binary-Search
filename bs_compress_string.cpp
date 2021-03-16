string solve(string s) {
   int n=s.size();
   string res;
   for(int i=0;i<n;i++){
       if(s[i]!=s[i+1]) res+=s[i];
   }
   return res;
}