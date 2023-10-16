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
bool check(const string& x, const string& s)
{
    return x.find(s) != string::npos;
}
void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll,ll>mp;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        ll temp = x;
        for(int j=2; j*j<=temp; j++)
        {
            while(x%j==0)
            {
                mp[j]++;
                x/=j;
            }
        }
        if(x!=1)
        {
            mp[x]++;
        }
    }
    string s = "YES";
    for(auto i:mp)
    {
        if((i.second%n)!=0)
        {
            s = "NO";
            break;
        }
    }
    cout << s << endl;


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



