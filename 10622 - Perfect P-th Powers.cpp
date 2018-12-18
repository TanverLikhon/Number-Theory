///https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=&problem=1563&mosmsg=Submission+received+with+ID+22409637
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
///accepted at 0.00 :)
///helped by https://en.wikipedia.org/wiki/Perfect_power
using namespace std;
int n;
vector<int>power;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD()
{

    int result = power[0];
    if(result==n)return 1;
    for (int i = 1; i < power.size(); i++)
        result = gcd(power[i], result);

    return result;
}
void Divisor(ll n)
{

    int ck=0;
    while(n%2==0)
    {
        n=n/2;
        ck++;
    }
    if(ck)
        power.pb(ck);
    for(ll i=3; i<=sqrt(n)+1; i=i+2)
    {
        ck=0;
        while(n%i==0)
        {
            n=n/i;
            ck++;
        }
        if(ck)
            power.pb(ck);
    }
    if(n>2)
        power.pb(n);
}
int main()
{


    while(sf("%d",&n)&&n!=0)
    {
        bool flag=false;
        if(n==-1)
            pf("1\n");
        else if(n==1)
            pf("0\n");
        else
        {
            if(n<0)
            {
                n=abs(n);
                flag=true;
            }
            Divisor(n);
            int x=findGCD();

            if(flag==true)
            {
                if(x%2==1)
                    pf("%d\n",x);
                else
                {
                    while(x%2!=1)
                    {
                        x=x/2;
                    }
                    pf("%d\n",x);

                }
            }

            else
                pf("%d\n",x);
        }

        power.clear();
    }
    return 0;
}
