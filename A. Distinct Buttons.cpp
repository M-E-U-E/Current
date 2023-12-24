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
    string s;
    cin>>n;
    int u=0,d=0,l=0,r=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x>0)r++;
        if(x<0)l++;
        if(y>0)u++;
        if(y<0)d++;
    }
    if(u && d && l && r){
        cout<<"NO"<<endl;
    }else{
       cout<<"YES"<<endl;
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
