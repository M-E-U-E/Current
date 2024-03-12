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
ll ans, n;
ll max_pro(ll n)
{
    ll ans=1;
    for (ll i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            ans=max(ans,i);
            ans=max(ans,n/i);
        }
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    ll c=1;
    while(n>1)
    {
        c += n;
        n = max_pro(n);
    }
    cout << c << endl;
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

