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
    ll n, m;
    cin >> n >> m;
    vector<pair<pair<ll, ll>, ll>> v;
    vector<pair<ll, ll>> a;
    for(int i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back(make_pair(make_pair(y, x), i));
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += v[i].first.first + v[2 * n - i - 1].first.first;
        a.push_back(make_pair(v[i].first.second, v[i].second + 1));
        a.push_back(make_pair(v[2 * n - i - 1].first.second, v[2 * n - i - 1].second + 1));
    }
    sort(a.begin(), a.end());
    cout << sum << endl;
    ll size = a.size();
    for(int i = 0; i < size / 2; i++)
    {
        cout << a[i].second << " " << a[size - 1 - i].second << endl;
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
