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
    ll n, k, x;
    cin >> n >> k;

    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    ll c=0;
    ll ans=0;
    vector<ll>res;
    for(int i=0; i<n; i++)
    {
        c += v[i].first;
        if(c<=k)
        {
            ans++;
            res.push_back(v[i].second);
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    for(int i=0; i<res.size();i++)
    {
        cout << res[i] << " ";
    }
    cout<< endl;

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

