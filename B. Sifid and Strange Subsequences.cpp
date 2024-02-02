#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
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
    ll n;
    cin >> n;
    ll a[n+70];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    ll ans = 0;
    ll x = a[0];
    ll y = a[1];
    ll p = abs(x-y);
    ll i=1;
    ll mn = p;
    while(i<n && mn>=a[i] && p>=a[i])
    {
        i++;
        ans++;
        x = y;
        y = a[i];
        p = abs(x-y);
        mn = min(mn, p);
    }
    cout << ans+1 << endl;
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
