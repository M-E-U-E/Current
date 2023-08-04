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
    ll n, x;
    cin >> n >> x;
    ll a[n+5], b[n+6];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    ll f = 1;
    for(int i=n-x; i<x; i++)
    {
        if(a[i]!=b[i])
        {
            f = 0;
            break;
        }
//        cerr << "run" << endl;
    }
    if(f)
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
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}


