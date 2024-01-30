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
    vector<ll> v(n);
    map<ll, ll> mp;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    //    ll a[n+5], b[n+6];
//    for(int i=0; i<n; i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0; i<n; i++)
//    {
//        cin >> b[i];
//    }
//    ll c=0;
    for(int i=0; i<v.size(); i++)
    {
        ll x;
        cin >> x;
        mp[v[i]] = x;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++)
    {
        cout << mp[v[i]] << " ";
    }
    cout << endl;


//
//    for(int i=0; i<n; i++)
//    {
//        if(a[i]!=b[i])
//        {
//            swap(a[i],b[i]);
//            c=1;
//        }
//    }
//    if(!c)
//    {
//        sort(a, a+n);
//        sort(b, b+n);
//    }
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

