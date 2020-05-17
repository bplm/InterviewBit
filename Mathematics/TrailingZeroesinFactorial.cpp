int Solution::trailingZeroes(int A) {int s=0;
    while(A!=0)
    {A/=5;
    s+=A;
}
return s;
}
