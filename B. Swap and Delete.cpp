
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
    ll n = s.size();
    ll f= 0;
    ll cnt = 0;
    ll cnt1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0')
        {
            cnt++;
        }
        else cnt1++;
    }
    for(int i = 0; i <  n; i++)
    {
        if(s[i] == '0')
        {
            if(cnt1==0)
            {
                break;
            }
            cnt1--;
        }
        else
        {
            if(cnt==0)
            {
                break;
            }
            cnt--;
        }
    }
    cout << (cnt1+cnt) << endl;
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

