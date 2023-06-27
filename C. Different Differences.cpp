#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k, i, j, diff;
    cin >> k >> n;
    j=1;
    diff=1;
    for(i=1; i<=k; i++)
    {
        cout << j << " ";
        if((n-(j+diff))>=(k-i-1))
        {
            j += diff;
            diff++;
        }
        else
        {
            j++;
        }
    }
    cout << endl;
}
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            solve();

        }
        return 0;
    }



