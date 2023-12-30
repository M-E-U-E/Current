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
    ll a[6];
    cin >> a[0] >> a[1] >> a[2];
    if(a[0]==a[1])
    {
        cout << a[2] << endl;
    }
    else if(a[1]==a[2])
    {
        cout << a[0] << endl;
    }
    else
    {
        cout << a[1] << endl;
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
