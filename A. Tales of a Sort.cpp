#include<bits/stdc++.h>
#define ll long long
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
    cin  >> n;
    ll a[n+6], b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    ll ans = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]!=b[i])
        {
            ans = b[i];
            break;
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
