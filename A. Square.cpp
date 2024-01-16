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
    ll a, b, c, d, x, y, p, q;
    cin >> a >> b >> c >> d >> x >> y >> p >> q;
    ll ans =0;
    ll f=0;

    if(a==c)
    {
        ll g = abs(b-d);
        ans += (g*g);

    }
    if(a==p)
    {
        ll h = abs(b-q);
        ans += (h*h);

    }
    if(a==x)
    {
        ll i = abs(b-y);
        ans += (i*i);
    }
//    if(b==d)
//    {
//        ans += abs(a-c)*2;
//
//    }
//    if(b==y)
//    {
//        ans += abs(a-x)*2;
//
//    }
//    if(b==q)
//    {
//        ans += abs(a-p)*2;
//
//    }
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

