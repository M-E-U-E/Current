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
    ll n, q;
    cin >> n >> q;
    ll a[n+5];
    map<ll,ll>mp;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(mp[a[i]]==0)
        {
            mp[a[i]]=i+1;
        }
    }
    while(q--)
    {
        ll x;
        cin >> x;
        cout << mp[x] << " ";
        ll ans = mp[x];
        mp.erase(x);
        for(auto i : mp)
        {
            if(i.second <ans)
            {
                mp[i.first] = i.second + 1;
            }
        }
        mp[x]=1;
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}


