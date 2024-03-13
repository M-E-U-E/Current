
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
const int N = 1e5+10;
bitset <N> vis;
void sieve (void)
{
    for (int i = 2; i * i < N; ++i)
    {
        if (!vis[i])
        {
            for (int j = i * i; j < N; j += i) vis[j] = 1;
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    string s, a, b;
    cin >> s;
    ll x=0, y=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '0')
        {
            a+='0';
            b+='0';
        }
        else if(s[i] == '2')
        {
            if(x == y)
            {
                a+='1';
                b+='1';
            }
            else if(x < y)
            {
                a+='2';
                b+='0';
            }
            else
            {
                a+='0';
                b+='2';

            }
        }
        else
        {
            if(x < y)
            {
                a+='1';
                b+='0';
            }
            else
            {
                a+='0';
                b+='1';
                ++y;
            }
        }
    }
    cout << a << endl;
    cout << b << endl;
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
