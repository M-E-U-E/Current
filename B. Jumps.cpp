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
    ll i;
    for(i=1; i<n; i++)
    {
        if(i*(i+1)>=2*n)
        {
            break;
        }
    }
    ll x = i*(i+1);
    x /= 2;
    if(x==n+1)
    {
        cout << i+1 << endl;
    }
    else
    {
        cout << i << endl;
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

