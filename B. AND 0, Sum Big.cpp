#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
ll power(ll base, ll p)
{
    ll ans=1;
    while(p)
    {
        if(p%2==1)
        {
            ans=(ans*base)%mod;
            p--;
        }
        else{
            base=(base*base)%mod;
            p/=2;
        }
    }
    return ans%mod;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    cout << power(n,k) << endl;
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
