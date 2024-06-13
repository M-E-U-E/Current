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
int calc(string &s)
{
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans += stoll(s.substr(i, 2));
    }
    return ans;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll fpos = -1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            fpos = i;
            break;
        }
    }

    if(fpos == -1)
    {
        cout << 0 << endl;
        return;
    }

    ll lpos = -1;
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == '1')
        {
            lpos = i;
            break;
        }
    }
    if(fpos == lpos)
    {
        if(k >= (n - lpos - 1))
        {
            swap(s[lpos], s[n - 1]);
        }
        else if(k >= fpos)
        {
            swap(s[0], s[fpos]);
        }
        cout << calc(s) << endl;
        return;
    }

    ll Nlpos = lpos;
    lpos = n - lpos - 1;
    ll ans = 0;
    if(k >= lpos)
    {
        k -= lpos;
        swap(s[Nlpos], s[n - 1]);
        if(k >= fpos)
        {
            swap(s[0], s[fpos]);
        }
        ans = calc(s);
    }
    else
    {
        if(k >= fpos)
        {
            swap(s[0], s[fpos]);
        }
        ans = calc(s);
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
