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
const int N = 105;

int n, a[N][N];
void solve()
{

    cin >> n;

    while(n--)
    {
        ll aa, b, c, d;
        cin >> aa >> b >> c >> d;
        for(int i=aa; i<b; i++)
        {
            for(int j=c; j<d; j++)
            {
                a[i][j] = 1;
            }
        }
    }
    ll sum = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            sum += a[i][j];
        }
    }
    cout << sum << endl;
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

