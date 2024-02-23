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
    ll n, q;
    cin >> n >> q;
    ll a[n+5], pre[n+5], c[n+5];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    pre[0]=0;
    c[0]=0;
    for(int i=1; i<=n; i++)
    {
        pre[i]=pre[i-1]+a[i];
        if(a[i]==1)
        {
            c[i]=c[i-1]+1;
        }
        else
        {
            c[i]=c[i-1];
        }
    }
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
        ll total = c[r]-c[l-1];
        ll sum = pre[r]-pre[l-1];
        sum -= (r-l+1);
        if(total)
        {
            if(sum>=total)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if(l==r)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
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

