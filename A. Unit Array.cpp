#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll a, b, n, c=0, i, x;
    cin >> n;
    a=0, b=0;
    for(i=0; i<n; i++)
    {
        cin >> x;
        if(x==1)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    while((b & 1) || (a<b))
    {
        a++;
        b--;
        c++;
    }
    cout << c << endl;
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

