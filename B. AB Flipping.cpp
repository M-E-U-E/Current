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
     cin>>n;
     string s;
     cin>>s;
     ll a=0,b=0;
     for(int i=0;i<n;i++)
     {
      if(s[i]=='A')
      {
        a++;
      }
      else
      {
        b++;
      }
     }
     ll c=0;
     ll posa=-1;
     ll posb=-1;
     for(int i=0;i<n;i++)
     {
        if(s[i]=='A')
        {
          posa=i;
          break;
        }

     }
     for(int i=n-1;i>=0;i--)
     {
      if(s[i]=='B')
      {
        posb=i;
        break;
      }

     }
    if(posa==-1||posb==-1||posb<posa)
    {
      cout<<0<<endl;
    }
    else
    {
      posb-=posa;
      cout<<posb<<endl;
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
