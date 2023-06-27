#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, j;
    cin >> n;
    string s;
    map<char,int>mp;
    for(i=0; i<=2*n; i++)
    {
        cin >> s;
        for(j=0; j<s.size(); j++)
        {
            mp[s[j]]++;
        }
    }
//    cin >> s;
    char c;
    for(auto it:mp)
    {
        if(it.second%2==1)
        {
            c = it.first;
            break;
        }
    }
    cout << c << endl;
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


