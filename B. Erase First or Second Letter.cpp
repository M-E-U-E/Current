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
    cin >> n;
    cin >> s;
    ll ans=0;
    ll c=0;
    map<char,ll>mp;
    for(int i=0; i<n; i++)
    {
        if(mp[s[i]]==0)
        {
            c++;
            ans+=c;
            mp[s[i]]=1;
        }
        else
        {
            ans+=c;
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

