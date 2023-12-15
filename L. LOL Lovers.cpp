
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
    ll i, j, n, x, L = 0, l = 0, o = 0;
    string s;
    cin >> n;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            L++;
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        else
        {
            o++;
        }
        if (L - l != l && n - L - o != o)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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
