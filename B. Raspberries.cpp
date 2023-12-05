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
    vector<ll>a(n);
    ll m=5;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%k==0)
        {
            m=0;
        }
        else
        {
            m=min(m,k-(a[i]%k));
        }
    }
    if(k==4)
    {
        ll x=0,y=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if(x>1)
        {
            m=0;
        }
        else if(x==1 && y>0)
        {
            ll p = 1;
            m=min(m,p);
        }
        else if(y>1)
        {
            ll q = 2;
            m=min(m,q);
        }
    }
    cout << m << endl;
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

