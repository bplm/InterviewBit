#define mod 1000003
long long int power(long long int A,long long int B)
{if(A==0) return 0;
if(B==0) return 1;
 long res;
 if(B%2==0)
 { res=power(A,B/2);
  res=(res*res)%mod;
 }
 else
 {res=A%mod;
  res=(res*(power(A,B-1)%mod))%mod;
 }
 return res%mod;
}
    int Solution::findRank(string A) {int n=A.length();
    long long int fact[n];
    fact[0]=1;
    for(int i=1;i<n;i++)
    {
        fact[i]=( ( (fact[i-1]) % mod ) *(i%mod))%mod;
    }
    int ans=0;
     for(int i=0;i<A.length();i++)
     { int count =0;
       for(int j=i+1;j<A.length();j++)
       { 
           if(A[j]<A[i])
           { count++;}
       }
       map<char,int> m;
       for(int k=i;k<A.length();k++)
       { m[A[k]]++;}
         long long int d=1;
         for(auto a:m)
         {
             d=((d%mod) *(fact[a.second] %mod ))%mod;
         }
       ans=(ans+count*( fact[A.length()-i-1]%mod * power(d,mod-2) %mod )%mod)%mod;
       
     }
     return (ans+1)%mod;
}
