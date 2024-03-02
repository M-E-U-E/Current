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
    map<ll,ll> mp;
    mp[0]=0;
    mp[1]=1;
    mp[2]=2;
    mp[3]=1;
    mp[4]=2;
    mp[5]=3;
    mp[6]=1;
    mp[7]=2;
    mp[8]=3;
    mp[9]=2;
    mp[10]=1;
    mp[11]=2;
    mp[12]=2;
    mp[13]=2;
    mp[14]=3;
    ll fifteen=n/15;
    n%=15;
    if(fifteen==0)
    {
        cout << mp[n] << endl;
    }
    else
    {
        ll ans=(fifteen+mp[n]);
        if(n>=5)
        {
            ans=min((fifteen+mp[n]),(fifteen+1+mp[n-5]));
        }
        cout << ans << endl;
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

