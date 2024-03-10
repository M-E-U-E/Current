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
    ll n;
    cin >> n;
    ll a[n+5];
    ll f=1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            f=0;
        }
    }
    if(f)
    {
        cout << "YES" << endl;
    }
    else
    {
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            if(a[i+1]-a[i]==1)
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
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


