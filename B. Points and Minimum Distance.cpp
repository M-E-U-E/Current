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
    ll a[200005];
    for(int i=1; i<=n*2; i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+1+n*2);
    ll s1=0,s2=0;

    for(int i=2; i<=n; i++)
    {
        s1=s1+(a[i]-a[i-1]);
        s2=s2+(a[i+n]-a[i+n-1]);
    }

    cout << s1+s2 << endl;
    for(int i=1; i<=n; i++)
    {
        cout << a[i] << " " << a[i+n] << endl;
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

