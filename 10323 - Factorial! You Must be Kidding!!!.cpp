///helped from because of bad logic of this problem
///http://www.algorithmist.com/index.php/UVa_10323

#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
#define MAX 5000

///accepted
int main()
{
    int n;
    while(sf("%d",&n)!=EOF)
    {


        if(n>13||(n<0&&n%2!=0))
            pf("Overflow!\n");
        else if(n<=7||(n<0&&n%2==0))
            pf("Underflow!\n");
        else
        {
            if(n==8)
                printf("40320\n");
            else if(n==9)
                printf("362880\n");
            else if(n==10)
                printf("3628800\n");
            else if(n==11)
                printf("39916800\n");
            else if(n==12)
                printf("479001600\n");
            else if(n==13)
                printf("6227020800\n");
        }
        //else pf("%d\n",factorial(n));
    }

    return 0;
}

