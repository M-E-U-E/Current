
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
//vector<ll>v;
//void primeFactors(ll n)
//{
//    // Print the number of 2s that divide n
//    while (n % 2 == 0)
//    {
//        v.push_back(2);
//        n = n/2;
//    }
//
//    // n must be odd at this point. So we can skip
//    // one element (Note i = i +2)
//    for (ll i = 3; i*i<=n; i = i + 2)
//    {
//        // While i divides n, print i and divide n
//        while (n % i == 0)
//        {
//            // cout<<i<<ss;
//            v.push_back(i);
//            n = n/i;
//        }
//    }
//
//    // This condition is to handle the case when n
//    // is a prime number greater than 2
//    if (n > 2)
//        v.push_back(n);
//}
const int N = 1e5+10;
bitset <N> vis;
void sieve (void)
{
    for (int i = 2; i * i < N; ++i)
    {
        if (!vis[i])
        {
            for (int j = i * i; j < N; j += i) vis[j] = 1;
        }
    }
}
string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;         // stores the max length of LCS
    int endingIndex = m;    // stores the ending index of LCS in `X`

    // `lookup[i][j]` stores the length of LCS of substring
    // `X[0…i-1]`, `Y[0…j-1]`
    int lookup[m + 1][n + 1];

    // initialize all cells of the lookup table to 0
    memset(lookup, 0, sizeof(lookup));

    // fill the lookup table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if the current character of `X` and `Y` matches
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;

                // update the maximum length and ending index
                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }

    // return longest common substring having length `maxlen`
    return X.substr(endingIndex - maxlen, maxlen);
}
void solve()
{
    string X, Y;
    cin >> X >> Y;
    ll m = X.size(), n = Y.size();
    string ans = LCS(X, Y, m, n);
    ll ok=ans.size();
    ll c = (m-ok)+(n-ok);
    cout << c << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}
