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
    ll a, b;
    cin >> a >> b;
    ll ans = INT_MAX;
    ll c=0;
    for(int i=0; i*i<=a; i++)
    {
        if(b==1 && i==0)
        {
            continue;
        }
        c=i;
        ll x = a;
        while(x)
        {
            x/=(b+i);
            c++;
        }
        ans = min(ans, c);
    }
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

