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
    cin>>s;

    ll n=s.size();

    vector<bool> d(n,false);
    stack<ll> upper,lower;

    for(ll i=0; i<n; i++)
    {
        if(s[i]=='b')
        {
            if(!lower.empty())
            {
                d[lower.top()]=true;
                lower.pop();
            }
            d[i]=true;
        }
        else if(s[i]=='B')
        {
            if(!upper.empty())
            {
                d[upper.top()]=true;
                upper.pop();
            }
            d[i]=true;

        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            upper.push(i);

        }
        else
        {
            lower.push(i);

        }
    }

    for(ll i=0; i<n; i++)
    {
        if(!d[i])
        {
            cout<<s[i];
        }
    }

    cout<<endl;
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

