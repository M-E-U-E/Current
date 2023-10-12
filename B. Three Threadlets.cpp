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
    ll a[5];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if(a[2]%a[0]!=0|| a[1]%a[0]!=0)
    {
        cout << "NO" << endl;
        return;
    }
    ll count = 0;
    count +=( a[1] / a[0]) - 1;
    count += (a[2] / a[0]) - 1;
    if(count <= 3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

