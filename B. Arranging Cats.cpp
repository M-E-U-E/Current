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
    string s, p;
    ll n;
    cin >> n >> s >> p;
    ll c1=0, c2=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0' && s[i]!=p[i])
        {
            c1++;
        }
        if(p[i]=='0' && p[i]!=s[i])
        {
            c2++;
        }
    }
    cout << max(c1,c2) << endl;
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
