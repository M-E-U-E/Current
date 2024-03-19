#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = c/a;
    ll x = ans+1;
    x+=(c/b)+1;
    cout << x << endl;
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

