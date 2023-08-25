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
    vector<ll>a(3);
    vector<ll>b(3);
    for(int i=0; i<3; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<3; i++)
    {
        cin >> b[i];
    }
    ll total = 0;
    ll mini = min(a[2],b[1]);
    total += 2LL*mini;
    a[2] -= mini;
    b[1] -= mini;
    ll maxi = max(0LL,b[2]-a[2]-a[0]);
    total -= 2LL*maxi;
    cout << total << endl;
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

