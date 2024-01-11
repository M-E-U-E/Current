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
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll GCD=a[0];
    for(int i=1; i<n; i++)
    {
        GCD = __gcd(GCD,a[i]);
    }
    if(GCD==1)
    {
        cout << 0 << endl;
        return;
    }
    ll ans=INT_MAX;

    for(ll i=0; i<n; i++)
    {
        ll temp=a[i];
        a[i]=__gcd(a[i],(i+1));
        ll g=a[0];
        for(int j=1; j<n; j++)
        {
            g=__gcd(g,a[j]);
        }
        if(g==1)
        {
            ans=min(ans,n-i);
        }
        a[i]=temp;
    }

    for(ll i=0; i<n; i++)
    {
        ll tempI=a[i];
        a[i]=__gcd(a[i],(i+1));
        for(ll j=i+1; j<n; j++)
        {
            ll tempJ=a[j];
            a[j]=__gcd(a[j],(j+1));
            ll g=a[0];
            for(ll k=1; k<n; k++)
            {
                g=__gcd(g,a[k]);
            }
            if(g==1)
            {
                ans=min(ans,(n-i)+(n-j));
            }
            a[j]=tempJ;
        }
        a[i]=tempI;
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

