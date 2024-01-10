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
int f(int n)
{
    int mx = 0, mn = 9;
    while (n)
    {
        mx = max(mx, n % 10);
        mn = min(mn, n % 10);
        n /= 10;
    }
    return mx - mn;
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = l, x = f(l);
    for(int i = l; i <= min(r, l + 300); i++)
    {
        if (f(i) > x)
        {
            x = f(i);
            ans = i;
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
