#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.second<b.second){
        return true;
    }

    return false;
}
void solve()
{
     int n;cin>>n;
     vector<pair<int,int>>v;
        int x, y;
     for(int i = 0;i<n;++i){
        cin>>x>>y;
        v.push_back({x,y});
     }
    cout<<endl;
    sort(v.begin(),v.end(),cmp);
     for(int i = 0;i<n;++i)
        cout<<v[i].first<<' '<<v[i].second<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//////////    ll t;
////    cin >> t;
//    while(t--)
//    {
        solve();

//    }
    return 0;
}
