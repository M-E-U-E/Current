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
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    unordered_map<ll,ll>mp;
    for(int i=0; i<n; i++)
    {
        mp[v[i]]=1;
    }
    ll mex=0;
    for(int i=0; i<1e5+5; i++)
    {
        if(mp[i]==0)
        {
            mex=i;
            break;
        }
    }
    if(mex==0)
    {
        cout<<"2\n";
        cout<<"1 1\n";
        cout<<"2 "<<n<<"\n";
        return;
    }
    mp.clear();
    ll left=0;
    vector<pair<ll,ll>>ans;
    for(ll i=0; i<n; i++)
    {
        if(v[i]<mex)
        {
            mp[v[i]]=1;
        }
        if(mp.size()==mex)
        {
            ll x = i+1;
            ll y = left+1;
            ans.push_back({y,x});
            left=x;
            mp.clear();
        }
    }
    ans[ans.size()-1].second=n;
    if(ans.size()<2)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<ans.size()<<"\n";
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<"\n";
        }
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
