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
    vector<ll>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s;
    cin >> s;
    vector<ll> b, r;
    for(int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            b.push_back(v[i]);
        }
        if (s[i] == 'R')
        {
            r.push_back(v[i]);
        }
    }
    ll B = b.size();
    ll R = r.size();
    bool ok = true;
    sort(b.begin(), b.end());
    for(int i = 0; i < B; i++)
    {
        if (b[i] <= i)
        {
            ok = false;
        }
    }
    sort(r.begin(), r.end(), greater<int>());
    for(int i = 0; i < R; i++)
    {
        if (r[i] > n - i)
        {
            ok = false;
        }
    }
    if(ok)
    {
        cout << "YES" << endl;
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

