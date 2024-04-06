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
ll __lcm(ll a,ll b)
{
    return a*b/(__gcd(a,b));
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> divisors;
    for(ll i=2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            divisors.push_back(i);
            if(n/i != i)
            {
                divisors.push_back(n/i);
            }
        }
    }
    ll a = 1;
    ll b = n-1;
    ll ans = __lcm(a,b);
    for(auto el:divisors)
    {
        ll sec = n/el;
        ll tempa = el*1;
        ll tempb = el*(sec - 1);
        ll tempans = __lcm(tempa,tempb);
        if(tempans < ans)
        {
            ans = tempans;
            a = tempa;
            b = tempb;
        }
    }

    cout << a << " " << b << endl;
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
