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
    ll ans = 0;
    for(int i = 2; i < n ; i++)
    {
        ll x = n;
        while(x > 0)
        {
            ans += (x % i);
            x /= i;
        }
    }
    cout << ans/__gcd(ans,n-2) << '/' << (n - 2) / __gcd(ans, n - 2) << endl;
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
