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
    sort(a,a+n);
    ll x = a[n-1]-a[0];
    if(a[n-1]==a[0])
    {
        cout << x << " " << (n-1)*n/2 << endl;
    }
    else
    {
        ll aa=1, b=1;
        for(int i = 1; i < n - 1; i++)
        {
            if(a[i] == a[n - 1])
            {
                aa++;
            }
            else if(a[i] == a[0])
            {
                b++;
            }
        }
        cout << x << " " << aa * b << endl;
    }
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

