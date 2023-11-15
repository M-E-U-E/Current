#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;
ll a[11111111];
ll go(ll n, ll m)
{
    ll s = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] <= m)
        {
            s+= ( m - a[i]);
        }
    }

    return s;
}
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
void solve()
{
    ll n, x;
    cin >> n >> x;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll l=1,  r = 1e13, ans;
    while(l <= r)
    {

        ll mid = (l+r)/2;
        ll re = 0;
        ll c = go(n, mid);
        if(c<=x)
        {
            ans = mid;
            l = mid + 1;

        }
        else
        {
            r = mid - 1;
        }
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
