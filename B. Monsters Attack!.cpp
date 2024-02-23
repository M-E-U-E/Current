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
    ll n, k;
    cin >> n >> k;
    ll a[n+5], b[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
//    cerr << "okay" << endl;
    vector<ll> v(n+1, 0);
    for(int i=0; i<n; i++)
    {
        ll x=abs(b[i]);
        v[x]+=a[i];
    }
    ll c= k;
    ll flag = 0;
    for(int i=1; i<=n; i++)
    {
        if(c<v[i])
        {
            flag=1;
        }
        c -= v[i];
        c+=k;
    }
    if(flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
