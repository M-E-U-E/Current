#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    double j, x, sum = 0, c=0, count=0, y=0, f=1, ans;
    ll n, i;
    cin >> n >> x;
    ll a[n+5];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    for(i=n-1; i>=0; i--)
    {
        sum += a[i];
        c = sum/(double(n-i));
        if(c>=x)
        {
            y++;
        }
        else
        {
            break;
        }
    }
    cout << y << endl;

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

