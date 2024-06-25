
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
const int MX = 105;
int a[MX][MX];
using T = tuple<int,int,int>;
void solve()
{
    int n, m, i, j, x, y;
    cin >> n >> m;

    for (i = 0; i <= n+1; ++i)
    {
        for (j = 0; j <= m+1; ++j) a[i][j] = 0;
    }

    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }

    auto is_bad = [&](int i, int j) -> bool
    {
        int x = 0;
        if (a[i][j] > a[i-1][j])
        {
            x += 1;
        }
        if (a[i][j] > a[i+1][j])
        {
            x += 1;
        }
        if (a[i][j] > a[i][j-1])
        {
            x += 1;
        }
        if (a[i][j] > a[i][j+1])
        {
            x += 1;
        }
        return (x == 4);
    };

    priority_queue<T> pq;
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= m; ++j)
        {
            pq.emplace(a[i][j], -i, -j);
        }
    }

    while (!pq.empty())
    {
        tie(x, i, j) = pq.top();
        pq.pop();
        i = -i;
        j = -j;
        if (is_bad(i, j))
        {
            y = 0;
            if (i > 1)
            {
                y = max(y, a[i-1][j]);
            }
            if (i < n)
            {
                y = max(y, a[i+1][j]);
            }
            if (j > 1)
            {
                y = max(y, a[i][j-1]);
            }
            if (j < m)
            {
                y = max(y, a[i][j+1]);
            }
            a[i][j] = y;
            pq.emplace(a[i][j], -i, -j);
        }
    }

    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= m; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
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
