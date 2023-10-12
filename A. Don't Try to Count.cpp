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
    string s, x;
    cin >> x >> s;
    ll a, b;
    ll c=0;
    ll f=0;
    for(int i = 0; i<=12; i++)
    {
        a = x.find(s);
        if(a != string::npos)
        {
            cout << c<< endl;
            return;
        }
        c++;
        x += x;
    }

    cout << -1 << endl;


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
