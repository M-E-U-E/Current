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
    ll sum = 0;
    ll val = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='-')
        {
            sum--;
        }
        else
        {
            sum++;
        }
        if(sum<0)
        {
            val+=(i+1);
            sum = 0;
        }
    }
//    cout << val << endl;
    cout << val+n << endl;
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

