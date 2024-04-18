

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
//    // one element (note i = i +2)
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
const int n = 1e5+10;
bitset <n> vis;
void sieve (void)
{
    for (int i = 2; i * i < n; ++i)
    {
        if (!vis[i])
        {
            for (int j = i * i; j < n; j += i) vis[j] = 1;
        }
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll mat[n][m];

    ll mn = 1e18;
    ll c = 0;
    ll ans = 0;
    for(ll i=0; i<n; i++)
    {

        for(ll j=0; j<m; j++)
        {
            cin >> mat[i][j];
            ll nm = mat[i][j];
            if(nm<0)
            {
                c++;
            }
            mn = min(mn,abs(nm));
            ans += abs(nm);
        }
    }

    if(c%2==0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans-(2*mn) << endl;
    }
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
