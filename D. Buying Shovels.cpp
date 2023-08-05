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
    ll n, k;
    cin >> n >> k;
    if(n<k)
    {
        cout << 1 << endl;
    }
    else if(k==1)
    {
        cout << n << endl;
    }
    else
    {
        ll x = 1;
        for(ll i=1; i*i<=n; i++)
        {
            if(n%i)
            {
                continue;
            }
            if(i<=k)
            {
                x = max(x,i);
            }
            if(n/i <=k)
            {
                x = max(x,n/i);
            }
        }
        cout << n/x << endl;
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

