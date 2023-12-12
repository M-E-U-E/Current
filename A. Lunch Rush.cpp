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
    ll n, k;
    cin >> n >> k;
    ll ans = 1e15;
    ans =- ans;
    for(int i=1; i<=n; i++)
    {
        ll f, t;
        cin >> f >> t;
        if(t>k)
        {
            f=f-(t-k);
        }
        ans = max(ans,f);
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    {
        solve();

    }
    return 0;
}
