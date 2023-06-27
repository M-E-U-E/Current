#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{

    ll n, i, j, c=0, x;
    cin >> n;
    ll a[n+5], b[n+6];
    vector<pair<ll,ll>> v;
    v.clear();
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(i=1; i<=n; i++)
    {
        cin >> b[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<n; j++)
        {
            if((a[j]>a[j+1]) || (b[j]>b[j+1]))
            {
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
                v.push_back({j,j+1});
            }
        }
    }
    for(i=1; i<n; i++)
    {
        if((a[i]>a[i+1]) || (b[i]>b[i+1]))
            {
                c=1;
                break;
            }
    }
    if(c!=0)
    {
        cout << -1 << endl;
    }
    else
    {
        x = v.size();
        cout << x << endl;
        for(i=0; i<x; i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}

