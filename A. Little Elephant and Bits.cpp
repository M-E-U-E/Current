#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    char c[111111];
    cin >> c;
    ll pos = -1;
    ll n = strlen(c);
    for(int i=0; i<n; i++)
    {
        if(c[i]=='0')
        {
            pos = i;
            break;
        }
    }
    if(pos==-1)
    {
        for(int i=0; i<n; i++)
        {
            cout << c[i];
        }
        cout << endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(i==pos)
            {
                continue;
            }
            else
            {
                cout << c[i];
            }
        }
        cout << endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}





