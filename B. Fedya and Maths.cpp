#include<bits/stdc++.h>
#define ll long long
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
    ll n = s.size();
    ll p = s[n-1]-48;
    ll q = s[n-2]-48;
    cerr << n << " " << p << " " << q << endl;
    if(s[0]==0)
    {
        cout << 4 << endl;
    }
    else
    {
        ll r = (10*q) + p;
        if(r%4==0)
        {
            cout << 4 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
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

