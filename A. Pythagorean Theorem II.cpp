#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n; cin >> n;
    ll y=0;
    for(ll i=1; i<=n; i++){
        for(ll j=i; j<=n; j++){
            ll a = (i*i) + (j*j);
            ll c = sqrt(a);
            if((c*c)==a && c<=n){
                y++;
            }
            cerr << a << " " << c << endl;
        }
    }
    cout << y << endl;
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
