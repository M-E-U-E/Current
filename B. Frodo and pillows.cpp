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
bool check(ll l, ll r, ll x, ll m)
{
    ll lf = 0, rg = 0, res = 0;
    lf = rg = (x * (x - 1)) / 2;
    if (x > 1) lf -= ((x - 1) * (x - 1)) / 2;
    else lf += (1 - x + 1);

    if (x > r) rg -= ((x - r - 1) * (x - r)) / 2;
    else rg += (r - x + 1);

    res = x + lf + rg;
    return res <= m;
}
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = k - 1;
    ll r = n - k;
    ll ans = 0;
    ll low = 1, high = m;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (check(l, r, mid, m))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}
