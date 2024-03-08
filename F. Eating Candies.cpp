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
    ll sum1=0, sum2=0;
    ll i=0, j=n-1;
    ll c1=0, c2=0;
    ll ans=0;
    while(i<=j)
    {
        if(sum1<=sum2)
        {
            sum1+=a[i];
            i++;
            c1++;
        }
        else
        {
            sum2+=a[j];
            j--;
            c2++;
        }
        if(sum1==sum2)
        {
            ans = c1+c2;
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

