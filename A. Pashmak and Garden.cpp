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
    ll a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if(abs(a1 - a2) == abs(b1 - b2))
    {
        cout << a1 << " " << b2 << " " << a2 << " " << b1 << endl;
    }
    else if(a1 == a2)
    {
        cout << a1 + abs(b1 - b2) << " " << b1 << " " << a2 + abs(b1 - b2) << " " << b2 << endl;
    }
    else if(b1 == b2)
    {
        cout << a1 << " " << b1 + abs(a1 - a2) << " " << a2 << " " << b2 + abs(a1 - a2) << endl;
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
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}

