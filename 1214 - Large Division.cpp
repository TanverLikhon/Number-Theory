
///http://lightoj.com/volume_showproblem.php?problem=1214
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back

using namespace std;
bool  largedivision(string number,  ll divisor)
{

ll rem = 0;

	for (int i = 0; i < number.length(); i++)
    {
        		rem = (rem*10 + (int)number[i] - '0') %divisor;

    }

   if(rem!=0)return false;

   //     return false;
    return true;
}
int main()
{
    string str;
ll divisor;
    int t;
    sf("%d",&t);
    int i=1;
    while(t--)
    {
        cin>>str>>divisor;
        if(str[0]=='-')
            str.erase(0,1);
        pf("Case %d: ",i);
        if(largedivision(str,divisor)==true)
            pf("divisible\n");
        else
            pf("not divisible\n");
        i++;
    }
    return 0;
}

