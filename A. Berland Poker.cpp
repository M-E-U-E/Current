#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k, m, x, y, a, b;
    cin >> n >> m >> k;
    x = n/k;
    if(x>=m)
    {
        cout << m << endl;
    }
    else
    {
        a = m-x;
        b = k-1;
        y = a/b;
        if(a%b!=0)
        {
            y++;
        }
        cout << x-y << endl;
    }
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

