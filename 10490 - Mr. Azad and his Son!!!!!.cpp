///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1431
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
int prime[]= {2,3,5,7,11,13,17,19,23,29,31};
///https://en.wikipedia.org/wiki/Perfect_number#Even_perfect_numbers
///accepted at 0.00 :)
///got tle in finding sum of the divisors
int main()
{
    int n;
    while(sf("%d",&n)&&n!=0)
    {
        bool flagprime=false;
        for(int i=0; i<11; i++)
        {
            if(prime[i]==n)
                flagprime=true;
        }
        if(flagprime==true)
        {
            if(n!=11&&n!=29&&n!=23)
            {
                ll p=pow(2,n-1)*(pow(2,n)-1);
                 pf("Perfect: %lld!\n",p);
            }

           else
            pf("Given number is prime. But, NO perfect number is available.\n");
        }
        else
            pf("Given number is NOT prime! NO perfect number is available.\n");
    }

    return 0;
}

