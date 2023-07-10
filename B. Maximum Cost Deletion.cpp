#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll a, b, c=0, n, i, x=0;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if(b>-1)
    {
        cout << (a+b)*n << endl;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                while(s[i]=='0' && i<n)
                {
                    i++;
                    x++;
                }
                c++;
            }
        }
        if(x!=n)
        {
            c++;
        }
        x=0;
        ll c1=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                while(s[i]=='1' && i<n)
                {
                    i++;
                    x++;
                }
                c1++;
            }
        }
        if(x!=n)
        {
            c1++;
        }
        ll ans = min(c,c1);
        ans *= b;
        ans += a*n;
        cout << ans << endl;

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
