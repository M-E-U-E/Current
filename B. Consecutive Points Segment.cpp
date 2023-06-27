#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, c=0, d;
    cin >> n;
    ll a[n+6];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    map<ll,ll>mp;
    for(i=0; i<n-1; i++)
    {
        d = a[i+1]-a[i];
        mp[d]++;
        if(d>3)
        {
            c = 1;
        }
    }
    if(mp[2]>2 || mp[3]>1)
    {
        c=1;
    }
    else if(mp[2]!=0 && mp[3]!=0)
    {
        c=1;
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

    {
        solve();

    }
    return 0;
}

