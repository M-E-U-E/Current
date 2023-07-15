#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, m;
    cin  >> n  >> m;
    ll a[n+5], b[n+5];
    for(ll i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    set<ll>st;
    for(ll i=n; i>0; i--)
    {
        st.insert(a[i]);
        b[i] = st.size();
    }
    while(m--)
    {
        ll x;
        cin >> x;
        cout << b[x] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}
