
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
const int N = 1e5+10;
bitset <N> vis;
void sieve (void)
{
    for (int i = 2; i * i < N; ++i)
    {
        if (!vis[i])
        {
            for (int j = i * i; j < N; j += i) vis[j] = 1;
        }
    }
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for(int i=0; i<=n; i++)
    {
        ll first=i;
        ll second=n;
        ll f=1;
        for(int j=1; j<=k-2; j++)
        {
            ll temp = second-first;
            second = first;
            first = temp;
            if(first<=second && first>=0)
            {
                continue;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            ans++;
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

