#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 998244353
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
    string s;
    cin>>s;
    ll n = s.size();
    vector<ll> v;
    ll cnt0=0, cnt1=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            cnt0++;

            if(cnt1!=0)
            {
                v.push_back(cnt1);
            }
            cnt1=0;
        }
        else
        {
            cnt1++;
            if(cnt0!=0)
            {
                v.push_back(cnt0);
            }
            cnt0=0;
        }
    }
    if(cnt0!=0)
    {
        v.push_back(cnt0);
    }

    if(cnt1!=0)
    {
        v.push_back(cnt1);
    }
    ll ans=0;
    ll val=1;

    for(auto i:v)
    {
        ans+=(i-1);
        val*=i;
        val%=mod;
    }

    for(ll i=1; i<=ans; i++)
    {
        val*=i;
        val%=mod;
    }

    cout << ans << " " << val <<endl;

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

