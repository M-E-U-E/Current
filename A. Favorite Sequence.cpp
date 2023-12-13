
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i, c=0;
    cin >> n;
    int a[100000];
    vector<int>v1,v2;
    for(i=1; i<=n; i++)
    {
        cin  >> a[i];

    }
    for(int k=1,j=n; k<=n/2; k++, j--)
    {
        cout << a[k] << " " << a[j] << " ";
    }
    if(n%2==1)
    {
        cout << a[(n+1)/2] << endl;
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
