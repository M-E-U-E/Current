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
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for(int i=0; i<60; i++)
    {
        while(n<m)
        {
            ans += n;
            n*=2;
        }
        n%=m;
        if(n==0)
        {
            break;
        }
    }
    if(n)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
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

