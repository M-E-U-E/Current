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
    ll n;
    cin >> n;
    if(n%2==0)
    {
        cout << n/2 << " " << n/2 << endl;
    }
    else
    {
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                ll x  = n/i;
                cout << x << " " << n-x << endl;
                return;
            }
        }
        cout << n-1 << " " << 1 << endl;
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



