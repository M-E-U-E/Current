
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

    string s;
    cin >> s;

    map<char, ll>mp;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    ll c = 0;

    for (auto it : mp)
    {
        c += (it.second & 1);
    }

    if (k == 0)
    {
        if (c < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return;
    }

    if (k >= c - 1)
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
