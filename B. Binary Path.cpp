
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
    ll n;
    cin >> n;
    string arr[2][n];
    for(int i=0; i<2; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<n; j++)
        {
            string x="";
            x+=s[j];
            arr[i][j]=x;
        }
    }
    string ans=arr[0][0];
    ll ways=1;
    ll i=0;
    ll j=0;
    ll x=1;
    while(j<n-1)
    {
        if(i==0)
        {
            if(arr[i][j+1]=="1"&&arr[i+1][j]=="0")
            {
                ans+=arr[i+1][j];
                i++;
                ways=x;
                x=1;
            }
            else if(arr[i][j+1]==arr[i+1][j])
            {
                ans+=arr[i][j+1];
                j++;
                x++;
            }
            else
            {
                ans+=arr[i][j+1];
                j++;
                x=1;
            }
        }
        else
        {
            ans+=arr[i][j+1];
            j++;
        }
    }
    if(i==0)
    {
        ans+=arr[1][n-1];
        ways=x;
    }
    cout << ans << endl;
    cout << ways << endl;
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
