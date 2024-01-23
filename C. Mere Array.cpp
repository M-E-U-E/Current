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
    ll mn = a[0];
    for(int i=1; i<n; i++)
    {
        mn = min(mn, a[i]);
    }
    cerr << mn << endl;
    vector<ll> v;
    for(int i=0; i<n; i++)
    {
        ll x= __gcd(mn, a[i]);
        if(x==mn)
        {
            v.push_back(a[i]);
            a[i]=-1;
        }
    }
    sort(v.begin(), v.end());
    ll j=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==-1)
        {
            a[i]=v[j];
            j++;
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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

