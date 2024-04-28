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
void solve()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>>v(n+1);
    for(int i = 1; i<=n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }


    ll ans = abs(v[a].first - v[b].first) + abs(v[a].second - v[b].second);
    ll x = 1e16 + 1;
    ll y = 1e16 + 1;
    for(int i = 1; i <=k; i++)
    {
        ll p = abs(v[a].first - v[i].first) + abs(v[a].second - v[i].second);
        ll q = abs(v[i].first - v[b].first) + abs(v[i].second - v[b].second);
        x=min(x,p);
        y=min(y,q);
    }

    ans = min(ans,x+y);
    cout << ans <<endl;
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
