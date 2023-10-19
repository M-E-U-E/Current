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
bool check(const string& x, const string& s)
{
    return x.find(s) != string::npos;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll maxv = (k-1)/2;
    ll minv = 1;
    maxv = min(maxv, n);
    minv = max(minv, k-n);
    if(minv > maxv)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << maxv - minv + 1 << endl;
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




