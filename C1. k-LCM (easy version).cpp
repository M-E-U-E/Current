#include<bits/stdc++.h>
#define ll long long
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
    if(n&1)
    {
        cout << n/2 << " " << n/2 << " " << 1 << endl;
    }
    else
    {
        if(n%4==0)
        {
            cout << n/2 << " " << n/4 << " " << n/4 << endl;
        }
        else
        {
            cout << n/2 - 1 << " " << n/2 - 1 << " " << 2 << endl;
        }
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

