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
    cin >> n >> k >> x;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    ll ans = 1;
    vector<ll> v, v1;
    for(int i=0; i<n-1; i++)
    {
        ll p = a[i+1]-a[i];
        if(p > x)
        {
            ans++;
            if(p-1 >= 1)
            {
                v.push_back(p-1);
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        ll q = v[i];
        if(q/x <=k && k>0)
        {
            ans--;
            k -= (q/x);
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
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

