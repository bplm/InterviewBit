int Solution::titleToNumber(string A) {
     long long int base=1;
    int n=A.length();
    int ans=0;
    for(int i=n-1;i>=0;i--)
    { int val=A[i]-'A'+1;
      ans+=(base*val);
      base*=26;
    }
    return ans;
}
