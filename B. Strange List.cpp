#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a[n+5];
    ll mn = 1e18;
    ll index = 0;

    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
        ll temp = a[i];
        ll c = 0;
        while(temp)
        {
            if(temp==0)
            {
                break;
            }
            if(temp%x)
            {
                break;
            }
            if(temp%x==0)
            {
                c++;
                temp/=x;
            }
        }
        if(c<mn)
        {
            mn = c;
            index = i;
        }
    }
    mn++;
    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        ans += a[i]*mn;
    }
    for(ll i=0; i<index; i++)
    {
        ans += a[i];
    }
    cout << ans << endl;
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
