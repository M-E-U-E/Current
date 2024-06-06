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
    ll n,i,c=1;
    cin >> n;
    vector<int>a(n),b(n);
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    ll m;
    cin >> m;
    vector<ll>d(m),ans(m);
    map<ll,ll>M;
    for(i=0; i<m; i++)
    {
        cin>>d[i];
        M[d[i] ]++;
    }
    ll x=-1,y=-1;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i] && b[i]==d[m-1])
        {
            ans[m-1]=i;
            x=i;
            break;
        }
        if(b[i]==d[m-1])y=i;
    }
    if(x==-1 && y!=-1)x=n+1;
    else if(x!=-1)
    {
        M[d[m-1] ]--;
    }
    if(x==-1)cout<<"NO\n";
    else
    {
        for(i=0; i<n; i++)
        {
            if(x==i)continue;
            if(a[i]!=b[i])
            {
                if(M[b[i] ])M[b[i] ]--;
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        cout << "YES" << endl;
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
