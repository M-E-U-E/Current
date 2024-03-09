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
    ll a[n+5];
    vector<ll> pref(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i==0)
        {
            pref[i] = a[i];
        }
        else
        {
            pref[i] = pref[i-1]+a[i];
        }
    }
    ll ans = 0;
    for(int i=1; i<n; i++)
    {
        ll x = __gcd(pref[i-1],(pref[n-1]-pref[i-1]));
        ans = max(ans,x);
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



