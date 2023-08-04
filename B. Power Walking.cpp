#include<bits/stdc++.h>
#define ll long long
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
    ll n; cin >> n;
    ll a[n+5];
    set<ll> st;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    ll s = st.size();
    ll x;
    for(ll i=1; i<=n; i++)
    {
        x = max(i,s);
        cout << x << " ";
    }
    cout << endl;

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



