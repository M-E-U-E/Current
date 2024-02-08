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
    ll n = s.size();
    ll idx = -1;
    ll sum = 0;
    for(int i=n-1; i>=0; i--)
    {
        sum = (s[i]-'0')+(s[i-1]-'0');
        if(sum>9)
        {
            idx = i;
            break;
        }
    }
    if(idx != -1)
    {
        for(int i=0; i<idx-1; i++)
        {
            cout << s[i];
        }
        cout << sum;
        for(int i=idx+1; i<n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
    else
    {
        cout << s[0]-'0' + s[1]-'0';
        for(int i=2; i<n; i++)
        {
            cout << s[i];
        }
        cout << endl;
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
