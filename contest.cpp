#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, sum=0;
    cin >> n;
    ll a[n+5];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    vector<ll> c(110);
    for(i=0; i<n; i++)
    {
        c[a[i]]++;
    }
    for(i=1; i<111; i++)
    {
        if(c[i]>c[i-1])
        {
            sum = 1;
            break;
        }
    }
    if(sum)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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
