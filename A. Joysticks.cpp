
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll a, b, c=0, n, i, x=0;
    cin >> a >> b;
    while(1)
    {
        if(a>b)
        {
            swap(a,b);
        }
        if(b<=1 || a==0)
        {
            break;
        }
        a++;
        b -= 2;
        c++;
    }
    cout << c << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while(t--)
    {
        solve();

    }
    return 0;
}
