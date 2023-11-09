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
    cin >> n;
    string s;
    cin >> s;
    string a = "", b = "";
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            break;
        }
        a += '0';
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == '0')
        {
            break;
        }
        b += '1';
    }
    cout << a;
    if((a.size() + b.size()) < n)
    {
        cout << "0";
    }
    cout << b << '\n';
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

