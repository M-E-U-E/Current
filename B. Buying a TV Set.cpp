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
ll gcf (ll a, ll b)
{
    return ((b == 0) ? a : gcf (b, a % b));
}
void solve()
{
     ll A, B, X, Y;
    cin >> A >> B >> X >> Y;
    ll g = gcf (X, Y);
    X /= g;
    Y /= g;

    cout << min (A / X, B / Y) << endl;
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


