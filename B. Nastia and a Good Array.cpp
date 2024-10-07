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
struct Change
{
    pair<int, int> indices;
    pair<ll, ll> values;
};
void solve()
{
    vector<ll> largePrimes = {1000000009, 1000000007};

    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<Change> ans;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 2; i <= n; i++)
    {
        if (__gcd(a[i], a[i - 1]) == 1)
        {
            continue;
        }
        ll newVal = largePrimes[0];
        if (i > 2 && a[i - 2] == newVal)
        {
            newVal = largePrimes[1];
        }
        if (a[i] > a[i - 1])
        {
            a[i] = newVal;
            ans.push_back({{i - 1, i}, {a[i - 1], newVal}});
        }
        else
        {
            a[i - 1] = newVal;
            ans.push_back({{i - 1, i}, {newVal, a[i]}});
        }
    }

    cout << ans.size() << '\n';
    for (const auto &change : ans)
    {
        cout << change.indices.first << ' ' << change.indices.second << ' '
             << change.values.first << ' ' << change.values.second << '\n';
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
