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
    char c, c1;
    ll n = s.size();
    c = s[0];
    c1 = s[n-1];
    if(c==c1)
    {
        cout << "NO" << endl;
    }
    else
    {
        ll mn = 0;
        ll sum = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==c)
            {
                sum++;
            }
            else if(s[i]==c1)
            {
                sum--;
            }
            else
            {
                sum++;
            }
            mn = min(mn,sum);
        }
        if(sum==0 && mn>=0)
        {
            cout << "YES" << endl;
            return;
        }
        mn = 0;
        sum = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==c)
            {
                sum++;
            }
            else if(s[i]==c1)
            {
                sum--;
            }
            else
            {
                sum--;
            }
            mn = min(mn,sum);
        }
        if(sum==0 && mn>=0)
        {
            cout << "YES" << endl;
            return;
        }

        cout << "NO" << endl;

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
