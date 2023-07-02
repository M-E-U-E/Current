#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool okay(string s)
{
    ll m=0, t=0, i;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='M')
        {
            m++;
        }
        else
        {
            t++;
        }
        if(m>t)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n, i, M=0, T=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='T')
        {
            T++;
        }
        else
        {
            M++;
        }
    }
    if(T==2*M)
    {
        if(okay(s)==true)
        {
            reverse(s.begin(),s.end());
            if(okay(s)==true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}
