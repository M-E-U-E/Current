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
    ll a=0, b=0;
    for(int i=0; i<5; i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a>b)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
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
