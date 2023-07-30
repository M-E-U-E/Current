#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ans(int n)
{
    ll r = 0;
    while(n>0)
    {
        r += n;
        n /= 10;
    }
    return r;
}
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll a = ans(x);
    ll b = ans(y);
    cout << abs(a-b) << endl;
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

