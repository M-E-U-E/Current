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
    long long n, m;
    cin >> n >> m;
    if(m-n+1<3)
    {
        cout << "-1" endl;
    }
    else if(n%2==0)
    {
        cout << n << " " << n+1 << " " << n+2 << endl;;
    }
    else if(n>1 && m-n+1>=4)
    {
        cout << n+1 << " " << n+2 << " " << n+3 << endl;
    }
    else if(n==1 && m-n+1==3)
    {
        cout << "-1" endl;
    }
    else if(n==1)
    {
        cout << 2 << " " << 3 << " " << 4 << endl;
    }
    else
    {
        cout<< "-1" << endl;
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

