#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int   N           = (int) 1e7+5;
int divs[N+10];
void divcount()
{
    for (int i=1; i<=N; i++)
    {
        for (int j=i; j<=N; j+=i)
        {
            divs[j]++;
        }
    }

}

void solve()
{
    ll n, i, m, c=0, a, b,k;
    cin >> n;
    divcount();
    for(k=1; k<=n; k++)
    {
        c+= k*divs[k];

    }
    cout << c << endl;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
    {
        solve();

    }
    return 0;
}



