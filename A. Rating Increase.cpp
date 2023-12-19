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
    string s1="",s2="";
    s1 +=s[0];
    ll a=1;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            s1+=s[i];
        }
        else
        {
            a=i;
            break;
        }
    }
    for(int i=a; i<s.size(); i++)
    {
        s2+=s[i];
    }
    ll x=stoi(s1);
    ll y=stoi(s2);
    if(y>x)
    {
        cout << s1 << "  " << s2 << endl;
        return;
    }
    cout << -1 << endl;

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

