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
    vector<string> s(n);
    map<ll, ll> mp;
    ll flag = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> s[i][j];
            if (s[i][j]=='1')
            {
                mp[i]++;
            }
        }
        if (i>0 and mp[i]>0 && mp[i]==mp[i - 1])
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout << "SQUARE" << endl;
    }
    else
    {
        cout << "TRIANGLE" << endl;
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
