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
    ll n, m, k;
    cin >> n >> m >> k;

    ll ans = 0;

    if (k == 1)
    {
        ans = 1;
    }
    else if (k == 2)
    {
        if (m < n)
        {
            ans += m;
        }
        else
        {
            ans += n-1;
            ans += m/n;
        }
    }
    else if (k == 3)
    {
        if (m >= n)
        {
            m -= n;
            ans += m;
            ans -= m/n;
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

