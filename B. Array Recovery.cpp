#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define mod 1000000007
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
    ll d[n+5];
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> d[i];
    }
    a[0]=d[0];
    if(n==1)
    {
        cout << a[0] << endl;
        return;
    }
    bool f=false;
    for(int i=1; i<n; i++)
    {
        if(a[i-1]-d[i]<0 | d[i]==0)
        {
            a[i]=a[i-1]+d[i];
        }
        else
        {
            f = true;
            break;
        }
    }
    if(f)
    {
        cout << -1 << endl;
    }
    else
    {
        for(int i=0; i<n; i++)
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

