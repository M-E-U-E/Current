#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, c=0, x, y, j;
    cin >> n;
    ll a[n+6];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for(i=0, j=n-1; i<j; i++, j--)
    {
        c += (a[j]-a[i]);
    }
    cout << c << endl;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}

