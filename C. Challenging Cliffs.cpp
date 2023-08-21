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
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    ll x, y;
    ll mn = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        ll p = a[i+1]-a[i];
        if(p<mn)
        {
            mn = p;
            x = i;
            y = i+1;
        }
    }
    if(n==2)
    {
        cout << a[0] <<  " " << a[1] << endl;
    }
    else
    {
        for(int i=y; i<n; i++)
        {
            cout << a[i] << " ";
        }
        for(int i=0; i<=x; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
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


