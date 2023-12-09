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
    cin>>n;
    string s;
    cin>>s;
    ll c=0;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            c++;
        }
    }
    vector<ll>v;
    v.push_back(c);
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]==s[j])
        {
            c+=2;
            v.push_back(c);
        }
    }
    if(n%2==1)
    {
        int x=v.size();
        for(int i=0;i<x;i++)
        {
            v.push_back(v[i]+1);
        }
    }
    string ans="";
    for(int i=0;i<=n;i++)
    {
        ans+='0';
    }
    for(int i=0;i<v.size();i++)
    {
        ans[v[i]]='1';
    }
    cout << ans << endl;
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


