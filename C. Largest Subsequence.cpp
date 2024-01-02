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
        char prev='a';
        vector<ll> v;
        for(ll i=n-1;i>=0;i--){
            if(s[i]>=prev){
                v.push_back(i);
                prev=s[i];
            }
        }
        ll cnt=0;
        for(ll i=0;i<n;i++){
            if(prev==s[i]){
                cnt++;
            }
        }

        ll m=v.size();
        // ll ans=0;
        for(ll i=0;i<m/2;i++){

            swap(s[v[i]],s[v[m-1-i]]);
        }
        ll ans=v.size()-cnt;
        for(ll i=1;i<n;i++){
            if(s[i]<s[i-1]){
                ans=-1;
                break;
            }
        }

        cout<<ans<<endl;
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
