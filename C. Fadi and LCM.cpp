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
ll lcm(ll i, ll j)
{
    ll x = (i*j) /__gcd(i,j);
    return x;
}
void solve()
{
    ll n;
    cin >> n;
    ll ans = n;
    for(ll i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(lcm(i,n/i)==n)
            {
                ans = min(ans, max(i,n/i));
            }
        }
    }
    cout << n/ans << " " << ans << endl;
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

