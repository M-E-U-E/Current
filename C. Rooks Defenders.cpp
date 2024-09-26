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
void solve()
{
    int n, q;
    cin >> n >> q;
    set<int> not_present_x, not_present_y;
    for (int i = 1; i <= n; ++i)
    {
        not_present_x.insert(i);
        not_present_y.insert(i);
    }
    map<int, int> x_a, y_a;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x, y;
            cin >> x >> y;
            x_a[x] += 1;
            y_a[y] += 1;
            not_present_x.erase(x);
            not_present_y.erase(y);
        }
        else if (t == 2)
        {
            int x, y;
            cin >> x >> y;
            x_a[x] -= 1;
            y_a[y] -= 1;
            if (x_a[x] == 0) not_present_x.insert(x);
            if (y_a[y] == 0) not_present_y.insert(y);
        }
        else
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            auto it1 = not_present_x.lower_bound(x1);
            auto it2 = not_present_y.lower_bound(y1);

            if (it1 == not_present_x.end() || it2 == not_present_y.end())
            {
                cout << "YES" << endl;
            }
            else if (*it1 > x2 || *it2 > y2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}

