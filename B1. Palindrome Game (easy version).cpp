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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll c = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            c++;
        }
    }
    if(c==1 || c%2==0)
    {
        cout << "BOB" << endl;
    }
    else
    {
        cout << "ALICE" << endl;
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


