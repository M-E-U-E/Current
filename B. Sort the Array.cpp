#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, l=0, r=0, f=1;
    cin >> n;
    ll a[n+5], b[n+6];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    for(ll i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            l = i;
            f = 0;
            break;
        }

    }
    for(ll j=n-1; j>=0; j--)
    {
        if(a[j]!=b[j])
        {
            r = j;
            f = 0;
            break;
        }
    }
    if(f)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        reverse(a+l, a+r+1);
//        for(ll i=0; i<n; i++)
//        {
//            cerr << a[i] << " ";
//        }
        for(ll i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                cout << "no" << endl;
                return;
            }
        }
        cout << "yes" << endl;
        cout << l+1 << " " << r+1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}

