int Solution::reverse(int A) {
    long long signed int r,y;int k=0;
                        long long signed int rev=0;y=A;
                    if(y<0)
                    {y=y*-1;++k;}
                    while(y>0)
                    {r=y%10;
                     if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && r > 7))
                         return 0;
                    rev=rev*10+r;
                    y/=10;
                    }
                    if(k>0){rev=rev*-1;}
            return rev;            
}
