#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n; cin >> n;
    ll a[n+5];
    map<ll,ll> mp;
    ll ans = 0;
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin >> x;
        ans += mp[x-i];
        mp[x-i]++;
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
