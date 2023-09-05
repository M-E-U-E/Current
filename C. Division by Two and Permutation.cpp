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
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    map<ll,ll>mp;
    for(int i=0; i<n; i++)
    {
        ll x = a[i];
        while(x>n)
        {
            x /= 2;
        }
        while(mp[x]==1)
        {
            x /= 2;
        }
        if(x>0)
        {
            mp[x]=1;
        }
    }
    ll c=0;
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==0)
        {
            c=1;
            break;
        }
    }
    if(c)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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




