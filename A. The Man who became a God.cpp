#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k, i, c=0, x;
    cin >> n >> k;
    ll a[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    vector<ll>v;
    for(i=2; i<=n; i++)
    {
        x = abs(a[i]-a[i-1]);
        v.push_back(x);
        c += x;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(i=1; i<k; i++)
    {
        c -= v[i-1];
    }
    cout << c << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}
