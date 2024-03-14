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
vector<ll>v;
void primeFactors(ll n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i*i<=n; i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            // cout<<i<<ss;
            v.push_back(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        v.push_back(n);
}
void solve()
{
    v.clear();
    ll n;
    cin >> n;
    primeFactors(n);
    vector<ll> ans;
    map<ll,ll> mp;
    ll mx=0, x;
    for(int i=0; i<v.size(); i++)
    {
        mp[v[i]]++;
        if(mp[v[i]]>mx)
        {
            mx = mp[v[i]];
            x = v[i];
        }
    }
    if(mx==1)
    {
        cout << 1 << endl;
        cout << n << endl;
    }
    else
    {
        ll sum=1;
        for(ll i=1; i<mx; i++)
        {
            ans.push_back(x);
        }
        for(ll j:v)
        {
            if(j!=x)
            {
                sum*=j;
            }
        }
        sum*=x;
        ans.push_back(sum);
        cout << ans.size() << endl;
        for(ll i:ans)
        {
            cout << i << " ";
        }
        cout << endl;
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

