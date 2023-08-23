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
    cin >> s >> p;
    ll x, y;

    if(x==y)
    {
        if(s==p)
        {
            cout << s << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        return;
    }
    if(x>y)
    {
        swap(s,p);
    }
    x = s.size();
    y = p.size();
    ll l = (x*y)/__gcd(x,y);
    string ans = "";
    int k=0;
    for(int i=0; i<l; i++)
    {
        ans += (char)s[k];
        k++;
        k %= x;
    }
    k = 0;
    for(int i=0; i<l; i++)
    {
        if(ans[i]!=p[k])
        {
            cout << -1 << endl;
            return;
        }
        k++;
        k %= y;

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
