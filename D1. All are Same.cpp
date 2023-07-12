#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll  b, c=0, n, i, x=0;
    cin >> n;
    ll  a[n+6];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    if(a[0]==a[n-1])
    {
        cout << -1 << endl;
        return;
    }
    for(i=1; i<n; i++)
    {
        c = __gcd(c,a[i]-a[0]);
    }
    cout << c <<  endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}
