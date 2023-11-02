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
    ll f = 1;
    string s, t;
    cin >> s >> t;
    string ans = "";
    for(int i = 0; i + 1 < n; i++)
    {
        ans.push_back(s[i]);
        if(s[i] == s[i + 1]) ans += t;
    }
    ans.push_back(s[n - 1]);
    int sz = ans.size();
    for(int i = 0; i + 1 < sz; i++)
    {
        if(ans[i] == ans[i + 1]) f = 0;
    }
    if(f)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
