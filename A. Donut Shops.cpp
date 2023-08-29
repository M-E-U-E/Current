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
    ll a, b, c;
    cin >> a >> b >> c;
    if(a<c)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << -1 << " ";
    }
    if(a*b>c)
    {
        cout << b;
    }
    else
    {
        cout << -1;
    }
    cout << endl;
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


