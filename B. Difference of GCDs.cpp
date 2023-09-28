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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> ans;
    for(int i=1; i<=n; i++)
    {
        ll x = (r/i)*i;
        if(x>=l)
        {
            ans.push_back(x);
        }
    }
    if(ans.size()==n)
    {
        cout << "YES" << endl;
        for(int i=0; i<ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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
