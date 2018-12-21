#include<bits/stdc++.h>
using namespace std;
#define sf          scanf
#define pf         printf
#define ll           long long
#define ull        unsigned long long
#define pb        push_back
#define v           vector
#define l            list
#define p          pair
#define m         map
#define nl         printf("\n")
///accepted :)
string mod(string str)
{
    ll res=0;

    for(int i=0; i<str.length(); i++)
        res=(res*2+(int)str[i]-'0')%131071;

    if(res==0)
        return "YES";
    return "NO";
}
int main()
{
    string str;
    while(cin>>str)
    {
        while(str[str.length()-1]!='#')
        {
            string str1;
            cin>>str1;
            str+=str1;
        }
        str.erase(str.length()-1);
        cout<<mod(str)<<endl;
    }


    return 0;
}

