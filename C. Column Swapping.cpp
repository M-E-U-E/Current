#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m, i, j;
    cin >> n >> m;
    vector<int>v[n+4],v1[n+4];
    int ans1 = 1, ans2 = 1;
    int ind = -1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        v1[i]=v[i];
        sort(v1[i].begin(),v1[i].end());
        if(v1[i]!=v[i])
        {
            ind=i;
        }
    }
    if(ind==-1)
    {
        cout<<"1 1"<<endl;
    }
    else
    {
        for(i=0; i<m; i++)
        {
            if(v1[ind][i]!=v[ind][i])
            {
                ans1=i;
                break;
            }
        }
        for(i=m-1; i>=0; i--)
        {
            if(v1[ind][i]!=v[ind][i])
            {
                ans2=i;
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            swap(v[i][ans1],v[i][ans2]);
        }
        int ans = -1;
        for(i=0; i<n; i++)
        {
            if(v[i]!=v1[i])
            {
                ans=1;
                break;
            }
        }
        if(ans==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans1+1<<" "<<ans2+1<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}

