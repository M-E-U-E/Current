#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, c=0;
    cin >> n;
    vector<ll> v;
    ll a[n+6], b[n+7];
    map<ll,ll>mp;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = i+1;
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            v.push_back(b[i+1]);
            swap(b[i],b[i+1]);
            mp[i]++;
            mp[i+1]++;
        }
        else
        {
            if(mp[i]!=0)
            {
                v.push_back(b[i]);
            }
            else
            {
                c=1;
                break;
            }
        }
    }
    if(mp[n-1]!=0)
    {
        v.push_back(b[n-1]);
    }
    else
    {
        c=1;
    }
    if(c)
    {
        cout << -1 << endl;
    }
    else
    {
        for(i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}


