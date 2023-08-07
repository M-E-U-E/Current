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
    ll n, m;
    cin >> n;
    double pi = acos(-1.0);
    double ans = 0;
    m = 2*n;
    if(n%2==0)
    {
        ans = 1.0/(tan(pi/m));
    }
    else
    {
        ans = cos(pi/(2*m))/sin(pi/m);
    }
    printf("%.9f\n",ans);
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

