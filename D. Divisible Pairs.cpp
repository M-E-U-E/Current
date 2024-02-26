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
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll a[n+5];
    map<ll,map<ll,ll>>mp;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll z = __gcd(x,y);
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        ans += mp[(x-a[i]%x)%x][a[i]%y];
        mp[a[i]%x][a[i]%y]++;
    }
    cout << ans << endl;
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

