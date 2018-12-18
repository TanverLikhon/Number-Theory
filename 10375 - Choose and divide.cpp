///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1316
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
///accepted :) 0.00 sec
double binomial(double n1,double k1,double n2,double k2)
{
    double res=1;
    double res1,res2;
    if(k2>n2-k2)
        k2=n2-k2;

    if(k1>n1-k1)
        k1=n1-k1;

    for(int i=0;; i++)
    {
        if(i>=k2&&i>=k1)
            break;
        if(i>=k1)
            res1=1;
        else
        {
            res1=(n1-i);
            res1=res1/(i+1);
        }
        if(i>=k2)
            res2=1;
        else
        {
            res2=(n2-i);
            res2=res2/(i+1);
        }
        res*=res1/(res2*1.0);
    }
    return  res;
}
int main()
{
//int n,k;
   double n2,k2,n1,k1;
    while(cin>>n1>>k1>>n2>>k2)
    {

    pf("%.5f\n",binomial(n1,k1,n2,k2));
    //    cout<<<<endl;

    }

    return 0;
}

