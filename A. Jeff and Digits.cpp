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
    ll a[n+5];
    ll ans =0, c=0, f=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==5)
        {
            f++;
        }
        else
        {
            c++;
        }
        if((f*5)%9==0)
        {
            ans = f;

        }
    }
    if(ans && c>0)
    {
        for(int i=0; i<ans; i++)
        {
            cout << 5 ;
        }
        for(int i=0; i<c; i++)
        {
            cout << 0 ;
        }

    }
    else if(c>0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
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
