#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define nl printf("\n")
void permutations(string str, int i, int n)
{
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }
    for (int j = i; j < n; j++)
    {
        swap(str[i], str[j]);
        permutations(str, i + 1, n);
        swap(str[i], str[j]);
    }
}
int main()
{
    string str;
    cout << "enter the string you want to permute : ";
    cin>> str;

    permutations(str, 0, str.length());

    return 0;
}
