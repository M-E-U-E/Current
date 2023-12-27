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
    ll a[n+5];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(ll k=2; ; k*=2)
    {
        set<ll>st;
        st.clear();
        for(ll i=0; i<n; i++)
        {
            st.insert(a[i]%k);
        }
        if(st.size()==2)
        {
            cout << k << endl;
            break;
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
