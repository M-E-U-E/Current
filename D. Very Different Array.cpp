
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
    ll n, m;
    cin >> n >> m;

    ll a[n+2];
    ll b[m+2];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<m; i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    reverse(b,b+m);

    ll sum=0;
    ll af=0,al=n-1;
    ll bf=0,bl=m-1;
    for(int i=0; i<n; i++)
    {
        if(abs(a[af]-b[bf])>abs(a[al]-b[bl]))
        {
            sum+=1ll*abs(a[af]-b[bf]);
            af++,bf++;
        }
        else
        {
            sum+=1ll*abs(a[al]-b[bl]);
            al--,bl--;
        }
    }
    cout << sum << endl;
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
