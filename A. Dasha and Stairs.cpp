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
    ll n, m;
    cin >> n >> m;
    if(n==0 && m==0)
    {
        cout << "NO" << endl;
    }
    else
    {
        ll x = abs(n-m);
        if(x==1 || m==n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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


