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
    ll x;
    cin >> x;
    ll f=0;
    ll N = 10002;
    ll a[N] = {0};
    map<ll,ll>mp;
    for(ll i=1; i<N; i++)
    {
        ll y = i*i*i;
        mp[y]=1;
    }
    for(ll i=1; i<N; i++)
    {
        ll y = i*i*i;
        if(mp[x-y]==1)
        {
            f =1;
            break;
        }
    }
    if(f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

