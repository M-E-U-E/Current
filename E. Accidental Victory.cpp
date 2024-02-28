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
    vector<pair<ll, ll>> v;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
        v.push_back({a[i],i+1});
    }
    sort(v.begin(), v.end());
    ll c=1;
    for(int i=n-2; i>=0; i--)
    {
        ll x = v[i+1].first;
        sum -= x;
        if(sum<x)
        {
            break;
        }
        else
        {
            c++;
        }
    }
    vector<ll> v1;
    for(int i=n-1; i>=n-1-c+1; i--)
    {
        v1.push_back(v[i].second);
    }
    sort(v1.begin(), v1.end());
    cout << v1.size() << endl;
    for(int i=0; i<v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
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
