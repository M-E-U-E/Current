#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n)
{
    ll m = n;
    while(n>0)
    {
        ll x = n%10;
        if(x==0)
        {
            n /= 10;
            continue;
        }
        if(m%x != 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    while(!check(n))
    {
        n++;
    }
    cout << n << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}

