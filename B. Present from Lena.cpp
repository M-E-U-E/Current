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
    ll n, x, d=0;
    cin >> n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<"  ";
        }
        for(int k=0; k<i; k++)
        {
            cout<<k<<" ";
        }
        cout << i;
        for(int k=i-1; k>=0; k--)
        {
            cout<<" "<<k;
        }
        cout << endl;
    }
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<"  ";
        }
        for(int k=0; k<i; k++)
        {
            cout<<k<<" ";
        }
        cout<<i;
        for(int k=i-1; k>=0; k--)
        {
            cout<<" "<<k;
        }
        cout << endl;
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

