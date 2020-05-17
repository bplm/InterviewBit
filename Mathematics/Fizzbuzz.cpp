vector<string> Solution::fizzBuzz(int A) { vector<string> ans;int n;
for(int i=1;i<=A;i++)
{n=i;
string e;
if(n%3==0 && n%5==0)
{e="FizzBuzz";}
else if(n%3==0)
{e="Fizz";}
else if(n%5==0)
{e="Buzz";}
else
{e=to_string(i);}
ans.push_back(e);
}
return ans;
}
