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
    ll a, b;
    cin >> a >> b;
    if ((b - a) == 1)
    {
        cout << 10 * a + 9 << " " << 10 * b << endl;
    }
    else if((b - a)==0)
    {
        cout << 10 * a + 1 << " " << 10 * b + 2 << endl;
    }

    else if(a==9 && b==1)
    {
        cout << 9 << " " << 10 << endl;
    }
    else
    {
        cout << -1 << endl;
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
