#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    if(x!=1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for(ll i=0; i<n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        if(k==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(k==2 && n%2==1)
                {
                    cout << "NO" << endl;
                }
            else
            {
                cout << "YES" << endl;
                ll a, b, c;
                a = n/2;
                c = 0;
                if(n%2==1)
                {
                    a--;
                    c++;
                }
                cout << a+c << endl;
                for(ll i=0; i<a; i++)
                {
                    cout << 2 << " ";
                }
                if(c)
                {
                    cout << 3;
                }
                cout << endl;

            }
        }

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

