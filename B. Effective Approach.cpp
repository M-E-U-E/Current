
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
    vector<ll> v(100000), p(100000), a(n+5);
    for(int i=1, j=n; i<=n, j>=1; i++, j--)
    {
        cin >> a[i];
        v[a[i]]=i;
        p[a[i]]=j;
    }
//    for(int i=1; i<=n; i++)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;
    ll q;
    cin >> q;
    ll vasya=0, petya=0;
    for(int i=1; i<=q; i++)
    {
        ll x;
        cin >> x;
        vasya+= v[x];
        petya+= p[x];
    }
    cout << vasya << " " << petya << endl;
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


