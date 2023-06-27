#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, l, x, c, k;
    cin >> k;
    n=1, i=1, c=9;
    while(k>i*c)
    {
        k -=(i*c);
        i++;
        n *= 10;
        c *= 10;
    }
    n += (k-1)/i;
    x = (k-1)%i;
    string s = to_string(n);
    cout << s[x] << endl;
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


