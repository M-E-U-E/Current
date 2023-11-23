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

    string s;
    cin >> s;
    int ans = 0, pv = 1;
    for(int i = 0; i < 4; i++)
    {
        int c = s[i] - '0';
        if(c == 0)
        {
            c = 10;
        }
        ans += (abs(pv - c)) + 1;
        pv = c;
    }
    cout << ans << endl;
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
