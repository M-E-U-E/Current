
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
    ll a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    ll x = a+b+c+d+e;
    if(x==0)
    {
        cout << -1 << endl;
        return;
    }
    if(x%5==0)
    {
        cout << x/5 << endl;
    }
    else
    {
        cout << -1 << endl;
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
