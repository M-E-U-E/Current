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
    ll n, k;
    cin >> n >> k;
    ll x;
    ll ans = 0;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(k<=n/i)
            {
                ans=max(ans,i);
            }
            if(n/i!=i)
            {
                if(k<=i)
                {
                    ans=max(ans,n/i);
                }
            }
        }
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

