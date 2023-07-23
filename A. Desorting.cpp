#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n; cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll f=0;
    ll mn = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            mn = 0;
        }
        else
        {
            mn = min(mn, ((a[i+1]-a[i])/2 +1));
        }
    }
    cout << mn << endl;

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
