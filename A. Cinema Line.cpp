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
    ll a[n+5];
    ll t25=0, t50=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==25)
        {
            t25++;
        }
        else if(a[i]==50)
        {
            if(t25>=1)
            {
                t25--;
                t50++;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if(a[i]==100)
        {
            if(t25>=1 && t50>=1)
            {
                t25--;
                t50--;
            }
            else if(t50==0 && t25>=3)
            {
                t25-=3;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;

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

