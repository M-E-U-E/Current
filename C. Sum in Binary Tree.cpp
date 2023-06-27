#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, c=0, x, y;
    cin >> n;
    while(n>0)
    {
        c += n;
        n /=2;
    }
    cout << c << endl;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}

