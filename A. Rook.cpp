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
    char c;
    cin >> c >> n;
    for(int i = 1; i <= 8; i++)
    {
        if(i == n)
        {
            continue;
        }
        cout << c << i << endl;
    }
    for(char i = 'a'; i <= 'h'; i++)
    {
        if(i == c)
        {
            continue;
        }
        cout << i << n << endl;
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
