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
    ll n;
    cin >> n;
    vector<ll>even,odd;
    ll a[n+5];
    for(int i=0; i<n*2; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            even.push_back(i+1);
        }
        else
        {
            odd.push_back(i+1);
        }
    }
    vector< pair <ll,ll> > ans;
    for(int i=0; i+1<even.size(); i+=2)
    {
        ans.push_back({even[i],even[i+1]});
    }
    for(int i=0; i+1<odd.size(); i+=2)
    {
        ans.push_back({odd[i],odd[i+1]});
    }

    for(int i=0; i<n-1; i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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

