// CPP program to find the largest power
// of k that divides n!
#include <bits/stdc++.h>
using namespace std;
// To find the power of a prime p in
// factorial N
int findPowerOfP(int fact, int p)
{
    int res = 0;
    while (fact > 0)
    {
        res += fact / p;
        fact /= p;
    }

    return res;
}
// returns all the prime factors of k
vector<pair<int, int> > primeFactorsofK(int k)
{
    // vector to store all the prime factors
    // along with their number of occurrence
    // in factorization of k
    vector<pair<int, int> > ans;
    for (int i = 2; k != 1; i++)
    {
        if (k % i == 0)
        {
            int count = 0;
            while (k % i == 0)
            {
                k = k / i;
                count++;
            }
            ans.push_back(make_pair(i, count));
        }
    }
    return ans;
}
// Returns largest power of k that
// divides n!
int largestPowerOfK(int n, int k)
{
    vector<pair<int, int> > vec;
    vec = primeFactorsofK(k);
    int ans = INT_MAX;
    for (int i = 0; i < vec.size(); i++)
        // calculating minimum power of all
        // the prime factors of k
        ans = min(ans, findPowerOfP(n,vec[i].first) / vec[i].second);
    return ans;
}
int main()
{
    cout << largestPowerOfK(100, 2) << endl;
  //  cout << largestPowerOfK(10, 9) << endl;
    return 0;
}

