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
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    ll c=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='B')
        {
            c++;
            i+=x;
            i--;
        }
    }
    cout << c << endl;
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
