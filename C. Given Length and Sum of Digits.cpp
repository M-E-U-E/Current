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
    int m, s;
    cin >> m >> s;
    if(s==0)
    {
        if(m==1)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    else
    {
        string q, p;
        for(int i=0; i<m; i++)
        {
            ll k = min(9,s);
            q.push_back('0'+k);
            s-=k;
        }
        if(s>0)
        {
            cout << -1 << " " << -1 << endl;
            return;
        }
        for(int i=m-1; i>=0; i--)
        {
            p.push_back(q[i]);
        }
        int j=0;
        while(p[j]=='0')
        {
            j++;

        }
        p[0]++;
        p[j]--;
        cout << p << " " << q << endl;
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
