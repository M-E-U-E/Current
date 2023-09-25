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
    ll n, k;
    cin >> n >> k;
    if(k==1)
    {
        ll p = (n*(n-1))/2;
        cout << p << " " << p << endl;
    }
    else
    {
        ll maxi = ((n-k+1)*(n-k))/2;
        ll even = n/k;
        ll odd = n%k;
        ll x = (even*(even-1))/2;
        ll y = ((even+1)*even)/2;
        ll ans = (x*(k-odd))+(y*odd);
        cout << ans << " " << maxi << endl;
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


