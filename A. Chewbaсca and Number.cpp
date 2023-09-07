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
    string s;
    cin>>s;
    ll l=s.length();
    for(ll i=0; i<l; i++)
    {
        s[i]=s[i]-'0';
        if((i!=0&&9-s[i]<s[i])||(i==0&&s[i]!=9&&9-s[i]<s[i]))
        {
            cout<<9-s[i];
        }
        else
        {
            cout<<s[i]-0;
        }
    }
    cout<<endl;
//cout << "MEUE";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}


