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
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n), v1(m);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> v1[i];
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    if(k%2)
    {
        if(v[0]<v1[m-1])
        {
            swap(v[0], v1[m-1]);
            sort(v.begin(),v.end());
            sort(v1.begin(),v1.end());
        }
    }
    else
    {
        if(v[0]<v1[m-1])
        {
            swap(v[0], v1[m-1]);
            sort(v.begin(),v.end());
            sort(v1.begin(),v1.end());
        }
        if(v1[0]<v[n-1])
        {
            swap(v1[0], v[n-1]);
            sort(v.begin(),v.end());
            sort(v1.begin(),v1.end());
        }
    }
    ll ans=0;
//    for(auto it: v)
//    {
//        ans+=it;
//    }
//    cout << ans << endl;
    for(int i=0; i<n; i++)
    {
        ans+=v[i];
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

