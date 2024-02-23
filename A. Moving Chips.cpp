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
    string s;
    ll a[n+5];
    ll c1=0, c2=0, c3=0, c=0;
    ll ans =0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            c=i;
            break;
        }

    }
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]==1)
        {
            c1=i;
            break;
        }

    }
    for(int i=c; i<c1; i++)
    {
        if(a[i]==0)
        {
            ans++;
        }
    }
    cout << ans << endl;


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
