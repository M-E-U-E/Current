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
    ll n, k;
    cin >> n >> k;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll mx = a[0];
    ll f = a[n-1];
    ll ans;
    for(int i=0; i<n-1; i++)
    {
         mx=max(a[i+1]-a[i],mx);
    }
//    cerr << mx << endl;
    ans = 2*(k-f);


    cout << max(mx,ans) << endl;

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

