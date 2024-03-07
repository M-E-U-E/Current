
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
    string s;
    cin >> s;
    ll n= s.size();
    vector<ll> v;
    v.push_back(0);
    for(int i=0; i<n; i++)
    {
        if(s[i]=='R')
        {
            v.push_back(i+1);
        }
    }
    v.push_back(n+1);
    ll ans = 0;
    for(int i=0; i<v.size()-1; i++)
    {
        ans = max(ans, v[i+1]-v[i]);
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
