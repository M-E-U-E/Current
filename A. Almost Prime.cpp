#include<bits/stdc++.h>
#define ll long long
using namespace std;
 bool isprime(int n) {
    if (n < 2) {
        return false;
    }
    int sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n, c=0, i, j;
    cin >> n;
    vector<ll> v(n+1);
    for(i=2; i<=n; i++)
    {
        if(v[i]==0)
        {
            for(j=i; j<=n; j+=i)
            {
                v[j]++;
            }
        }
    }
    for(i=0; i<=n; i++)
    {
        if(v[i]==2)
        {
            c++;
        }
    }
    cout << c << endl;
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
