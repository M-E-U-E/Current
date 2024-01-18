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

    ll n;
    string a, b, c;
    cin >> n >> a >> b >> c;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=c[i] && b[i]!=c[i])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();

    }

    return 0;
}

