///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1161

#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 100000
///accepted :)  0.10 should improve
int multiplication(int x,int fact[],int fact_size)
{
    int prod,carry=0;
    for(int i=0; i<fact_size; i++)
    {
        prod=fact[i]*x+carry;
        fact[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        fact[fact_size]=carry%10;
        carry=carry/10;
        fact_size++;
    }
    return fact_size;
}
ll factorial_sum(int n)
{
   int  fact[MAX];
  fact[0]=1;
  int  fact_size=1;
    ll sum=0;
    for(int i=2; i<=n; i++)
        fact_size=multiplication(i,fact,fact_size);
      //  cout<<fact_size<<endl;
  //    cout<<"fact size"<<fact[fact_size-1]<<endl;

        for(int i=fact_size-1;i>=0;i--)
        {
            		//cout << fact[i];
                 sum=sum+fact[i];
        }
//		cout << fact[i];
            return sum;
}

int main()
{
    int n;
    while(sf("%d",&n)!=EOF)
    {
        pf("%lld\n",factorial_sum(n));
    }


    return 0;
}

