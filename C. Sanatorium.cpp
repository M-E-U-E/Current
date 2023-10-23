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
    ll a, b, c;
    cin >> a >> b >> c;
    ll maxo =max({a,b,c});
    if(a==b && b==c)
    {
        cout<<0<<endl;
        return;
    }
    if(maxo==a)
    {
        if(a==b&&a!=c)
            cout<<(maxo-1-c)<<endl;
        else if(a==c&&a!=b)
            cout<<maxo-1-b<<endl;
        else
            cout<<(maxo-1-b)+(maxo-1-c)<<endl;
    }
    else if(maxo==b)
    {
        if(b==a&&b!=c)
            cout<<maxo-1-c<<endl;
        else if(b==c&&b!=a)
            cout<<maxo-1-a<<endl;
        else
            cout<<(maxo-1-a)+(maxo-1-c)<<endl;
    }
    else if(maxo==c)
    {
        if(c==a&&c!=b)
            cout<<maxo-1-b<<endl;
        else if(c==b&&c!=a)
            cout<<maxo-1-a<<endl;
        else
            cout<<(maxo-1-b)+(maxo-1-a)<<endl;
    }
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

