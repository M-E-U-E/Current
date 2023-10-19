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
    if(n<3)
    {
        cout<<1<<endl<<1<<endl;
    }
    else if(n==3)
    {
        cout<<2<<endl;
        cout<<1<<" "<<3<<endl;
    }
    else if(n==4)
    {
        cout<<4<<endl;
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    }
    else
    {
        cout<<n<<endl;
        for(int i=1; i<=n; i+=2)
        {
            if(i>1)
            {
                cout<<" ";
            }
            cout<<i;
        }
        for(int i=2; i<=n; i+=2)
        {
            cout<<" "<<i;
        }
        cout<<endl;
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

