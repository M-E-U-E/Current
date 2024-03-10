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
long long lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n+5], b[n+5];
    ll f=1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    b[0]=a[0];
    for(int i=1; i<n; i++)
    {
        b[i] = lcm(a[i-1],a[i]);
    }
    b[n]=a[n-1];
    for(int i=1; i<=n; i++)
    {
        if(__gcd(b[i-1],b[i])!=a[i-1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

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



