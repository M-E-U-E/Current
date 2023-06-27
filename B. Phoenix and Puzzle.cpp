#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{

    map<ll,ll> mp;
    ll a, b, c = 0, x, y;
    ll ans = 4, i = 1;
    mp[2] =1;
    mp[4] =1;
    while(ans<=1e9)
    {
        x = i+i+1;
        x *=4;
        ans += x;
        mp[ans]=1;
        i++;
    }
    ans = 2;
    i = 1;
    while(ans<=1e9)
    {
        x = i+i+1;
        x *=2;
        ans += x;
        mp[ans]=1;
        i++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(mp[n]>=1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    {
        solve();

    }
    return 0;
}

