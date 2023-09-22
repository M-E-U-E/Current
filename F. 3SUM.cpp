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
vector<map<int,int> >requiredcnt;

void preprocess()
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                if((i+j+k)%10==3)
                {
                    map<int,int>temp;
                    temp[i]++;
                    temp[j]++;
                    temp[k]++;
                    requiredcnt.push_back(temp);
                    temp.clear();
                }
            }
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    map<ll,ll>mp;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        mp[x%10]++;
    }

    for(auto it:requiredcnt)
    {
        bool flag=0;
        for(auto jt:it)
        {
            if(mp[jt.first]<jt.second)
                flag=1;
        }
        if(!flag)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    preprocess();
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}
