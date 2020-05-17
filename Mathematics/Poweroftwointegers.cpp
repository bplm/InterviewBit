int Solution::isPower(int A) {
    if(A==1) return 1;
    for(long long int i=2;i*i<=A;i++)//start from 2 ;if start by 1 ;TLE as loop continues.
    { unsigned y=2;
    unsigned p=pow(i,y);
    while(p<=A && p>0)
    { if(p==A)
        {return 1;}
        y++;
        p=pow(i,y);

    }
    }
    return 0;
        
}
