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
//vector<ll>v;
//void primeFactors(ll n)
//{
//    // Print the number of 2s that divide n
//    while (n % 2 == 0)
//    {
//        v.push_back(2);
//        n = n/2;
//    }
//
//    // n must be odd at this point. So we can skip
//    // one element (Note i = i +2)
//    for (ll i = 3; i*i<=n; i = i + 2)
//    {
//        // While i divides n, print i and divide n
//        while (n % i == 0)
//        {
//            // cout<<i<<ss;
//            v.push_back(i);
//            n = n/i;
//        }
//    }
//
//    // This condition is to handle the case when n
//    // is a prime number greater than 2
//    if (n > 2)
//        v.push_back(n);
//}
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
int getCount(int x)
{
    int total=0;
    while(x%2==0)
    {
        x/=2;
        total++;
    }
    return total;
}
void solve()
{
    ll n;
    cin >> n;
    ll x=0,extra=0;
    vector<ll>a(n),b;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        x+= getCount(a[i]);
        ll cnt = getCount(i+1);
        extra += cnt;
        b.push_back(cnt);
    }
    if(x>=n)
    {
        cout << 0 << endl;
        return;
    }
    if(x+extra < n)
    {
        cout << -1 << endl;
        return;
    }
    ll ans=0;
    sort(b.rbegin(),b.rend());
    for(auto i : b)
    {
        ans++;
        if(x+i>=n)
        {
            break;
        }
        x+=i;
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

