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
    ll n;
    cin >> n;
    ll a[n];
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    ll l = 0, r = n - 1;
    while (r - l > 1)
    {
        ll mn = *st.begin(), mx = *st.rbegin();
        if (a[l] != mn && a[l] != mx && a[r] != mn && a[r] != mx)
        {
            break;
        }
        if (a[l] == mn || a[l] == mx)
        {
            l++;
            st.erase(a[l - 1]);
        }
        if (a[r] == mn || a[r] == mx)
        {
            r--;
            st.erase(a[r + 1]);
        }
    }
    if (r - l > 1)
    {
        cout << l + 1 << ' ' << r + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
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
