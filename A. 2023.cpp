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
    ll n, k;
    cin >> n >> k;
    ll ans = 1;
    ll x;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        ans *=x;
    }
    if(2023%ans)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << (2023/ans) << " ";
        for(int i=0; i<k-1; i++)
        {
            cout << "1 ";
        }
        cout << endl;

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



