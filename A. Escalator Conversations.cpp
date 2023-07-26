#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, m, k, h, i;
    cin >> n >> m >> k >> h;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v, v1, v2;
    sort(a,a+n);
    sort(v.begin(), v.end());
    ll c=0;
    for(i=0; i<n; i++)
    {
        ll x = abs(h-a[i]);
        if(x%k==0 && x<=k*(m-1) && x!=0)
        {
            c++;
        }
    }
    cout << c << "\n";

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
