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
    ll n=5, m=5, x=0;
    char a[100][100];
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            cin >> a[i][j];
//            if(a[i][j]=='X')
//            {
//                c++;
//            }
        }
    }
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
//            cin >> a[i][j];
            if(a[i][j]=='X')
            {
                if(i<=5)
                {
                    if(j<=5)
                    {
                        x+= min(i,j);
                    }
                    else
                    {
                        x+= min(i,11-j);
                    }
                }
                else
                {
                    if(j<=5)
                    {
                        x+= min(11-i,j);

                    }
                    else
                    {
                        x+= min(11-i,11-j);
                    }
                }
            }
        }
    }
    cout << x << endl;


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

