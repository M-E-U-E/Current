#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, c=0, mina=0, minb=0, f=0;
    cin  >> n;
    ll a[n+6], b[n+6];
    for(i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
        if(a[i]>b[i])
        {
            c++;
            f=1;
        }
    }
    if(f)
    {
        cout << c << endl;
    }
    else
    {
        cout << 0 << endl;
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
