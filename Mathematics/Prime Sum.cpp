bool isPrime(int N)
{ if(N<=1)   return false;
 if(N==2) return true;//ye condn pehle hi likhni hai!!
  if(N%2==0) return false;
  
   for( int i=3;i*i<=N;i+=2)
   {if(N%i==0) return false;}
   return true;
}
    vector<int> Solution::primesum(int N) {
    vector<int>ans;ans.reserve(2);
    for( int i=2;i<N;i++)
    {if(isPrime(i)&&isPrime(N-i))
    {
        ans.push_back(i);ans.push_back(N-i);
        return ans;
    }
    }
    }
  

