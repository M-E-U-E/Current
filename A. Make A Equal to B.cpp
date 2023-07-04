#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, x1=0, x2=0, y1=0, y2=0;
    cin >> n;
    ll a[n], b[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==0)
        {
            x1++;
        }
        else
        {
            y1++;
        }
    }
     for(i=0; i<n; i++)
    {
        cin >> b[i];
        if(b[i]==0)
        {
            x2++;
        }
        else
        {
            y2++;
        }
    }
    ll c=0, ans=0;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }
    }
    ans = abs(x1-x2)+abs(y1-y2);
    cout << min(c,(ans/2)+1) << endl;
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

