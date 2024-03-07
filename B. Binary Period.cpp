
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
    ll c1=0, c2=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if(c1==0 || c2==0)
    {
        cout << s << endl;
    }
    else
    {
        if(s[0]=='1')
        {
            for(int i=1; i<=s.size(); i++)
            {
                cout << "10";
            }
        }
        else
        {
            for(int i=1; i<=s.size(); i++)
            {
                cout << "01";
            }
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


