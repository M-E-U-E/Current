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
    ll i, n;
    cin >> n;
    ll a[n+7];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mx = a[0], ans = a[0];
    for (i = 1; i < n; ++i)
    {
        if ((a[i] % 2 != 0 && a[i - 1] % 2 == 0) || (a[i] % 2 == 0 && a[i - 1] % 2 != 0))
        {
            mx = max(a[i], mx + a[i]);
        }
        else
        {
            mx = a[i];
        }
        ans = max(ans, mx);
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

