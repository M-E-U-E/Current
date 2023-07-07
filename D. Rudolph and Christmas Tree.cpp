#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    long double n, b, h, c, ans=0, x, y, i, a, p;
    cout << fixed << setprecision(6);
    cin >> n >> b >> h;
    vector<long double> v;
    c = .5*b*h;
    for(i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
        ans += c;
    }
    sort(v.begin(), v.end());
    for(i=1; i<n; i++)
    {
        y = abs(v[i]-v[i-1]);
        if(y<h)
        {
            y = h-y;
            a = y/h;
            p = a*b;
            ans -= (.5*y*p);
        }
    }
    cout << ans << endl;
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

