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
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans=-1e18;
    for(int i=0; i<5; i++)
    {
        ll aa,bb,cc,dd,ee;
        ee = (n-1+i)%n;
        dd = (n-2+i)%n;
        cc = (n-3+i)%n;
        bb = (n-4+i)%n;
        aa = (n-5+i)%n;
        ll val = a[aa]*a[bb]*a[cc]*a[dd]*a[ee];
        ans=max(ans,val);
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
