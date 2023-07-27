#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll sum = 1;
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        sum *= 2;
        ans += sum;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}


