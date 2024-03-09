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
    ll a[1111];
    for(int i=0; i<1111; i++)
    {
        a[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    sort(a,a+1111);
    ll p = a[1110];
    ll q;
    if(n%2)
    {
        q = (n+1)/2;
    }
    else
    {
        q = n/2;
    }
    if(p<=q)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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

