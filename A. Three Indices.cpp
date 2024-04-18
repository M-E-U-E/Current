
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
//    // one element (note i = i +2)
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
const int n = 1e5+10;
bitset <n> vis;
void sieve (void)
{
    for (int i = 2; i * i < n; ++i)
    {
        if (!vis[i])
        {
            for (int j = i * i; j < n; j += i) vis[j] = 1;
        }
    }
}
void solve()
{
     long long n, k;
    cin >> n;
    long long a[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int l, m, r;
    for (int i = 1; i <= n; i++)
    {
        l = i;
        m = i;
        r = i;
        for (int j = i - 1; j > 0; j--)
        {
            if (a[j] < a[i])
                l = j;
        }
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] < a[i])
                r = j;
        }
        if (l < m && m < r)
        {
            cout << "YES" << endl;
            cout << l << " " << m << " " << r << endl;
            return;
        }
    }

    cout << "NO" << endl;
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
