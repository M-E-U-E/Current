
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
    ll n, m, k, p, q;
    cin >> n >> m >> k;
    cin >> p >> q;
    ll c = 1;
    for(int i=0; i<k; i++)
    {
        ll x, y;
        cin >> x >> y;
        ll z = abs(x-p)+abs(q-y);
        if(z%2==0)
        {
            c=0;
        }
    }
    if(c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
