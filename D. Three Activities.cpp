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
    ll n, res = 0;
    cin >> n;
    vector<ll> a(n),b(n),c(n);
    vector< pair < ll, ll > > va, vb, vc;
    for(ll i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        va.push_back(make_pair(a[i],i));
    }
    for(ll i = 0 ; i < n ; i++)
    {
        cin >> b[i];
        vb.push_back(make_pair(b[i],i));
    }
    for(ll i = 0 ; i < n ; i++)
    {
        cin >> c[i];
        vc.push_back(make_pair(c[i],i));
    }
    sort(va.begin(),va.end(),greater <> ());
    sort(vb.begin(),vb.end(),greater <> ());
    sort(vc.begin(),vc.end(),greater <> ());

    for(ll i = 0 ; i < 3 ; i++)
    {
        for(ll j = 0 ; j < 3 ; j++)
        {
            for(ll k = 0 ; k < 3 ; k++)
            {
                if(va[i].second!=vb[j].second && va[i].second!=vc[k].second && vb[j].second!=vc[k].second)
                {
                    res = max(va[i].first+vb[j].first+vc[k].first, res);
                }
            }
        }
    }
    cout<<res<<endl;
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
