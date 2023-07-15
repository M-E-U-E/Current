#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, d;
    cin >> n >> d;
    ll a[n+5];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];

    }
    ll m;
    cin >> m;
    sort(a,a+n);
    ll c=0;
    for(ll i=0; i<m; i++)
    {
        if(i<n)
        {
            c  += a[i];
        }
        else
        {
            c -= d;
        }
    }
    cout << c << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}

