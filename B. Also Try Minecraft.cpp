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
    ll n, m;
    cin >> n >> m;
    vector<ll> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    vector<ll> arr1(n, 0), arr2(n, 0);
    vector<ll> prefix1(n + 1, 0), prefix2(n + 1, 0);

    for(int i = 0; i < n - 1; i++)
    {
        if(heights[i] > heights[i + 1])
        {
            arr1[i + 1] = heights[i] - heights[i + 1];
        }
        prefix1[i + 1] = prefix1[i] + arr1[i + 1];
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(heights[i] < heights[i + 1])
        {
            arr2[i + 1] = heights[i + 1] - heights[i];
        }
        prefix2[i + 1] = prefix2[i] + arr2[i + 1];
    }
    for(int i = 0; i < m; i++)
    {
        int sj, tj;
        cin >> sj >> tj;
        sj--;
        tj--;

        if(sj < tj)
        {
            cout << prefix1[tj] - prefix1[sj] << endl;
        }
        else
        {
            cout << prefix2[sj] - prefix2[tj] << endl;
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
