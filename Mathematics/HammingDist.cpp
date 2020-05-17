int Solution::hammingDistance(const vector<int> &A) {int s=0;
    for(int i=0;i<A.size()-1;i++)
    { long int x=A[i];
      for(int j=i+1;j<A.size();j++)
      { long  int y=A[j];int k=0;
      if(x==y){k=0;}
      else {
    long int r=x^y;
        while(r!=0)
        {k+=(r&1==1)?1:0;
          r=r>>1;
        }
      }
        s+=2*k;
      }
    }
        return s;
        
}
