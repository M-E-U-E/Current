#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll r, g, b, w, c=0;
    cin >> r >> g >> b >> w;
    c = r%2 + g%2 + b%2  + w%2;
    if (c <= 1 || (c >= 3 && r && g && b))
    {
        cout  << "YES" <<  endl;
    }
    else
    {
        cout <<  "NO"  <<  endl;
    }
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

