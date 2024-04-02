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
string decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    string ans;
    for (int i = 64; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    set<ll> s;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> m(64);
    ll gcd = 0;
    for(int i = 0; i < n; i++)
    {
        string s = decToBinary(v[i]);
        for (int j = 0; j < 64; j++)
        {
            if (s[j] != '0')
            {
                m[j]++;
            }
        }
    }
    for(int i = 0; i < 64; i++)
    {
        gcd = __gcd(gcd, m[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        if(gcd % i == 0)
        {
            cout << i << ' ';
        }
    }
    cout << endl;
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
