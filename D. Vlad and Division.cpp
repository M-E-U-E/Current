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
    int n, p, q;
    cin >> n;
    vector<ll> v(n);
//    for(int i=0; i<n; i++)
//    {
//        cin >> v[i];
//    }
    map<ll, ll> mp;
    ll ans = 0;
    ll x = (1LL<<31)-1;
    for(int i=0; i<n; i++)
    {
        cin >> p;
        q = x^p;
        if(mp[p]==0)
        {
            ans++;
            mp[q]++;
        }
        else
        {
            mp[p]--;
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
