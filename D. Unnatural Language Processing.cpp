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
    for(int i=0; i<n; i++)
    {
        if(s[i]=='b' || s[i]=='c' || s[i]=='d')
        {
            cout << s[i];
        }
        else
        {
            cout << s[i];
            if(s[i+1]=='b' || s[i+1]=='c' || s[i+1]=='d')
            {
                if(s[i+2]!='a' && s[i+2]!='e')
                {
                    cout << s[i+1];
                    i++;
                }
            }
            if(i!=n-1)
            {
                cout << ".";
            }
        }
    }
    cout << endl;
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

