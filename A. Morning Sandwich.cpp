#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll b, c, h;
    cin >> b >> c >> h;
    ll x = c+h;
    ll y = 2*x + 1;
    ll z = b+(b-1);
    cout << min(y,z) << endl;
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
