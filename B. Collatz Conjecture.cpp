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
ll y;

ll calc(ll x, ll k)
{
    ll ops = -2;
    ll cnt = 0;
    while(k > 0)
    {
        ll req = y * (x/y + 1) - x;
        if (req >= k)
        {
            x += k;
            k -= k;
            cnt += k;
        }
        else
        {
            x += req;
            k -= req;
            cnt += req;
        }
        while (x % y == 0) x /= y;
        if (x == 1)
        {
            if (ops == -2)
            {
                ops = -1;
                cnt = 0;
            }
            else if (ops == -1)
            {
                ops = cnt;
            }
            else
            {
                k = k % ops;
            }
        }
    }
    return x;
}
void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    while(x>=2)
    {
        int mod = y - (x % y);
        if(mod > k)
        {
            break;
        }
        x += mod;
        k -= mod;
        while(x % y == 0)
        {
            x /= y;
        }
    }
    if(x==1)
    {
        int dif = y - x;
        k %= dif;
        x += k;
        cout << x << endl;
    }

    else
    {
        x += k;
        cout << x << endl;
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
