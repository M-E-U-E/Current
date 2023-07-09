#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ok(ll a, ll b, ll x, ll y, ll n)
{
    ll d1 = a-x;
    ll d2 = b-y;
    ll c1 = min(d1,n);
    a -= c1;
    n -= c1;
    ll c2 = min(d2,n);
    b -= c2;
    n -= c2;
    ll ans = a*b;
    return ans;
}

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll ans = min(ok(a,b,x,y,n),ok(b,a,y,x,n));
    cout << ans << endl;
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
