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
    cin >> n;
    if(n&1)
    {
        cout << "BOB" << endl;
    }
    else
    {
        if(!(n&(n-1)))
        {
            ll c=0;
            while(n)
            {
                n /=  2;
                c++;
            }
            if(c&1)
            {
                cout << "ALICE" << endl;
            }
            else
            {
                cout << "BOB" << endl;
            }
        }
        else
        {
            cout << "ALICE" << endl;

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

