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
    string s;
    cin >> n >> s;

    vector<ll> v(26, 0);

    for(int i = 0; i < n; i++)
    {
        v[s[i] - 'a']++;
    }

    ll mx = 0;
    ll ans = n;
    for(int i = 0; i < 26; i++)
    {
        mx = max(mx, v[i]);
    }
    ans = min(ans, mx - (n-mx));
    ans = max(ans, n%2);

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
