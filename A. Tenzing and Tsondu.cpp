#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, m, i, s=0, c=0;
    cin >> n >> m;
    ll a[n+5], b[m+6];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        c += a[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> b[i];
        s += b[i];
    }
    if(c==s)
    {
        cout << "Draw" << endl;
    }
    else if(c>s)
    {
        cout << "Tsondu" << endl;
    }
    else
    {
        cout << "Tenzing" << endl;
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


