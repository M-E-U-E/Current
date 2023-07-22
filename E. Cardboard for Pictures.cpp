#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, c;
    cin >> n >> c;
    ll a[n+5];
    ll area = 0;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
        area += pow(a[i],2);
    }
    c -= area;
    c /= 4*n;
    sum /=2*n;
//    cerr << c << " " << sum << endl;
    ll b = sqrt(pow(sum,2)+c);
//    cerr << b << endl;
    b -= sum;
    cout << b << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}

