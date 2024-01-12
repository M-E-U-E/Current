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
    ll n, k;
    cin >> n >> k;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    ll index = k-1;
    for(int i=0; i<k; i++)
    {
        sum += a[i] + sum;
    }
    ll windowsum = sum;
    for(int j=k; j<n; j++)
    {
        windowsum = windowsum+a[j]-a[j-k];
        if(windowsum<sum)
        {
            sum = windowsum;
            index = j;
        }
    }
    cout << abs(index+1-k+1) << endl;
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


