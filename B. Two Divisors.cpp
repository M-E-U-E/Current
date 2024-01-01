#include<bits/stdc++.h>
#define ll long long
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
    ll a, b;
    cin >> a >> b;
    if(a==1)
    {
        cout << b*b << endl;
        return;
    }
    ll g = __gcd(a,b);
    ll n = (a*b)/g;
    ll ans = b*(b/a);
    if(n==b)
    {
        cout << ans << endl;
    }
    else
    {
        cout << n << endl;
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

