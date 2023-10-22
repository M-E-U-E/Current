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
    ll x, k;
    cin >> x >> k;
    while(true)
    {
        ll y = x, s = 0;
        while(y > 0)
        {
            s+= y % 10;
            y/= 10;
        }
        if(s%k==0)
        {
            cout << x << endl;
            break;
        }
        x++;
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
