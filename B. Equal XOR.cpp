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
    ll n,k;
    cin >> n >> k;
    vector<ll> a(2*n+5), b(n);
//    cin >> a >> b;
    for(int i=0; i<2*n; i++)
    {
        cin >> a[i];
    }
//    for(int i=0; i<n; i++)
//    {
//        cin >> b[i];
//    }
    ll k1=k*2;
    ll k2=k*2;
    vector<ll> ans1,ans2;
    map<ll,ll>mp;
    for(int i=0; i<n; i++)
    {
        mp[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        mp[b[i]]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==1&&k1>0)
        {
            k1--;
            k2--;
            ans1.push_back(i);
            ans2.push_back(i);
        }
    }
    if(ans1.size()%2==1)
    {
        ans1.pop_back();
        ans2.pop_back();
        k1++;
        k2++;
    }
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==2&&k1>0)
        {
            k1-=2;
            ans1.push_back(i);
            ans1.push_back(i);
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==0&&k2>0)
        {
            k2-=2;
            ans2.push_back(i);
            ans2.push_back(i);
        }
    }
    for(auto a : ans1)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    for(auto a : ans2)
    {
        cout<<a<<" ";
    }
    cout<<endl;
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
