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
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    memset(a,0,sizeof(a));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ll k;
            cin >> k;
            if(k==1)
            {
                for(int x=0; x<m; x++)
                {
                    a[i][x]=1;
                }
                for(int x=0; x<n; x++)
                {
                    a[x][j]=1;
                }
            }
        }
    }
    ll turn=0;
    ll flag=0;
    while(1)
    {
        flag = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]==0)
                {
                    turn++;
                    flag=1;
                    for(int x=0; x<m; x++)
                    {
                        a[i][x]=1;
                    }
                    for(int x=0; x<n; x++)
                    {
                        a[x][j]=1;
                    }
                    break;
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(!flag)
        {
            break;
        }
    }
    if(turn%2)
    {
        cout << "Ashish" << endl;
    }
    else
    {
        cout << "Vivek" << endl;
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

