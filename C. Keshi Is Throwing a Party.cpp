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
ll n, a[222222], b[222222];
bool f(int x)
{
    int c = 0;

    for(int i = 0; i < n; ++i)
    {
        if(x - (c + 1) <= a[i] && c <= b[i]) ++c;
    }


    return c >= x;
}
void solve()
{
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];
    }
    int l = 0, r = n;
    int ans = 0;

    while(l <= r)
    {
        int mid = (l + r) >> 1;

        if(f(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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

