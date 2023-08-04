#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    ll a[n+5];
    vector<ll> v;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    for(ll i=0; i<n-1; i++)
    {
        auto x = lower_bound(v.begin()+i+1,v.end(),l-v[i]);
        auto y = upper_bound(v.begin()+i+1,v.end(),r-v[i]);
        ans += x-y;
    }
    cout << abs(ans) << endl;
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
