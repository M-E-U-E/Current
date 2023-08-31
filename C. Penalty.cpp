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
    cin >> s;
    ll x=0, y=0, i;
    ll ans1=10, ans2=10;
    for(int i=0; i<10; i++)
    {
        ll left = (10-i+1)/2;
        if(x>y+left)
        {
            ans1 = i;
            break;
        }
        if(i%2==0)
        {
            if(s[i]!='0')
            {
                x++;
            }
        }
        else
        {
            if(s[i]=='1')
            {
                y++;
            }
        }
    }

    x = 0, y = 0;
    for(int i=0; i<10; i++)
    {
        ll left = (10-i)/2;
        if(y>x+left)
        {
            ans2 = i;
            break;
        }
        if(i%2==1)
        {
            if(s[i]!='0')
            {
                y++;
            }
        }
        else
        {
            if(s[i]=='1')
            {
                x++;
            }
        }
    }
    cout << min(ans1,ans2) << endl;
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


