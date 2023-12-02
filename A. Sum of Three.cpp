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
    if(n<7)
    {
        cout<<"NO"<<endl;
        return;
    }
    ll x=n-3;
    if(x%3!=0)
    {
        cout<<"YES"<<endl;
        cout<<1<<" "<<2<<" "<<x<<endl;
    }
    else
    {
        if(x-2==1 || x-2==4)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<4<<" "<<x-2<<endl;
        }
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


