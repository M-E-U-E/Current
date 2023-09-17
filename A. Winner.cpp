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
    while(cin >> n)
    {
        string s[10000];
        int a[10000];
        map<string,ll>mp;
        for(int i=0; i<n; i++)
        {
            cin >> s[i] >> a[i];
            mp[s[i]]+=a[i];
        }
        ll mx=0;
        for(int i=0; i<n; i++)
        {
            mx = max(mp[s[i]],mx);
        }
        map<string,ll>mp2;
        string ans;
        for(int i=0; i<n; i++)
        {
            mp2[s[i]]+=a[i];
            if(mp2[s[i]]>=mx && mp[s[i]]==mx)
            {
                ans=s[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}
