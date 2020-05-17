string Solution::convertToTitle(int A) {
    string ans;string mapping="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(A>0)
    { A-=1;
     int remainder=A%26;
     ans=mapping[remainder]+ans;
     A/=26;
        
    }
    return ans;
}
