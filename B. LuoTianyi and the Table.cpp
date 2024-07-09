
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
    vector<ll> v(n * m);
    for (int i = 0; i < n * m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll mini = v[0];
    ll min1 = v[0];
    ll min2 = v[1];

    ll maxi = v.back();
    ll max1 = maxi;
    ll max2 = v[n * m - 2];

    ll w1 = (maxi - min1) * (n - 1) + (maxi - min2) * (m - 1) + (maxi - mini) * (n * m - (n - 1) - (m - 1) - 1);
    ll w2 = (maxi - min2) * (n - 1) + (maxi - min1) * (m - 1) + (maxi - mini) * (n * m - (n - 1) - (m - 1) - 1);
    ll w3 = (max2 - mini) * (n - 1) + (max1 - mini) * (m - 1) + (maxi - mini) * (n * m - (n - 1) - (m - 1) - 1);
    ll w4 = (max1 - mini) * (n - 1) + (max2 - mini) * (m - 1) + (maxi - mini) * (n * m - (n - 1) - (m - 1) - 1);

    cout << max({w1, w2, w3, w4}) << endl;
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


