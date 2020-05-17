int gcd(int x,int y)
{ if(x==0||y==0) return 0;
  if(x==y)  return x;
  if(x>y) 
  return gcd(x-y,y);
  return gcd(x,y-x);
}
int Solution::cpFact(int A, int B) {
   while(gcd(A,B)!=1)
 {
     A=A/gcd(A,B);
     
 }
     return A;
    
}
