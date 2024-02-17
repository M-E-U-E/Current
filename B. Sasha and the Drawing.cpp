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
    ll a[n+6];
    ll x = k/2;
    ll y = (4*n)-2;
    if(k==y)
    {
        cout << x+1 << endl;
    }
    else
    {
        if(!(k%2))
        {
            cout << x << endl;
        }
        else
        {
            cout << x+1 << endl;
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

