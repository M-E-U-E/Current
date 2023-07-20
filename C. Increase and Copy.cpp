#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, x, y;
    cin >> n;
    x = sqrt(n);
    if(x*x!=n)
    {
        if(x*(x+1)>=n)
        {
            cout << (2*x)-1 << endl;
        }
        else
        {
            cout << 2*x << endl;
        }
    }
    else
    {
        cout << (2*x)-2 << endl;
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

