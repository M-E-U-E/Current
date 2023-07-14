#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, c=0, f=0, x, a=0, b=0;
    cin >> n;
    string s = to_string(n);
    for(i=0; i<s.size(); i++)
    {
        x = s[i]-'0';
        if(x%2)
        {
            if(f)
            {
                a *= 10;
                b *= 10;
                a += x/2;
                b += (x/2)+1;
            }
            else
            {
                a *= 10;
                b *= 10;
                a += (x/2)+1;
                b += (x/2);
            }
            f = 1-f;

        }
        else
        {
            a *= 10;
            b *= 10;
            a += (x/2);
            b += (x/2);
        }
        n /= 10;
    }
    cout << a << " " << b << endl;

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
