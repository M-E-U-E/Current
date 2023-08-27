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
    if(s[0]>'4')
    {
        cout << 1;
        for(int i=1; i<=s.size(); i++)
        {
            cout << 0;
        }
        cout << endl;
        return;
    }
    bool yes = false, no = false;
    for(int i=0; i<=s.size()-1; i++)
    {
        if(s[i]>'4')
        {
            no = true;
            for(int j=i-1; j>=0; j--)
            {
                if(s[j]<'4')
                {
                    s[j]++;
                    for(int k=j+1; k<=s.size()-1; k++)
                    {
                        s[k]='0';
                    }
                    yes = true;
                    break;
                }
            }
            break;
        }
    }
    if((no && yes) || !no)
    {
        cout << s << endl;
    }
    else
    {
        cout << 1;
        for(int i=1; i<s.size(); i++)
        {
            cout << 0;
        }
        cout << endl;
        return;
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

