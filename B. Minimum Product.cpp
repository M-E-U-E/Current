#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int64_t a, b, x, y, n, i, p, q, r, t, c=0;
    cin >> a >> b >> x >> y >> n;
    n = min(n,a-x+b-y);
    int64_t da = min(a-x,n);
    int64_t ans = (a-da)*(b-(n-da));
    int64_t db = min(b-y,n);
    ans = min(ans, (a-(n-db))*(b-db));
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

