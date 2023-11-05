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
    ll n, h, l, r, q;
    cin >> n >> h >> l >> r >> q;
    ll a,b,c,d;
    while(q--)
    {
        cin >> a >> b >> c >> d;
        if(a==c)
        {
            cout<<abs(b-d);
        }
        else
        {
            if(b<l&&d<l)
            {
                cout<<abs(a-c)+l-b+l-d;
            }
            else if(b>r&&d>r)
            {
                cout<<abs(a-c)+b-r+d-r;
            }
            else
            {
                cout<<abs(a-c)+abs(d-b);
            }
        }
        cout << endl;
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


