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
    ll x=1e9, y=1e9, ans=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(x>y)
        {
            swap(x,y);
        }
        if(a[i] <= x)
        {
            x=a[i];
        }
        else if(a[i]<=y)
        {
            y=a[i];
        }
        else
        {
            x=a[i];
            ans++;
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


