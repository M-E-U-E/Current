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
    ll c=0, f=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='.')
        {
            c++;
        }
        else
        {
            f++;
        }
    }
    ll x=1, sum=0;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1] && s[i]=='.')
        {
            x++;
            if(x==3)
            {
                cout << 2 << endl;
                return;
            }
        }
        else
        {
            x=1;

        }


    }
//    cout << x << endl;
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

