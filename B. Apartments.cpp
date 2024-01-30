#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a, b;
    for(int i=0; i<n; i++)
    {
        ll x; cin >> x;
        a.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        ll x; cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll i=0, j, ans=0;
    while(i<n && j<m)
    {
        if(a[i]-k>b[j])
        {
            j++;
        }
        else if(a[i]+k<b[j])
        {
            i++;
        }
        else
        {
            i++;
            j++;
            ans++;
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

