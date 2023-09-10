#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];

    }
    ll sum = a[0];
    for(int i=1; i<n; i++)
    {
        sum ^= a[i];
    }
    cerr << sum << endl;
    for(int i=1; i<n; i++)
    {
        sum ^= a[i];
    }
    cerr << sum << endl;
    if(n%2==0)
    {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        cout << 4 << endl;
        cout << 2 << " " << n << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
    }
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
