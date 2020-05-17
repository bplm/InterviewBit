int Solution::isPalindrome(int x) {
    
    int n,r;long long int rev=0;
        if(x<0)
            return 1;
                              n=x;
        while(n>0)
        {r=n%10;
        rev=rev*10+r;
        n/=10;
        }
                              if(x==rev)
                                  return 1;
                              else
                                  return 0;
}
