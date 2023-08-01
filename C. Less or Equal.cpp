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
    ll n, k;
    cin >> n >> k;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    if(k==0)
    {
        if(a[0]==1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else
    {
        if(a[k-1]==a[k])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a[k-1] << endl;
        }
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

