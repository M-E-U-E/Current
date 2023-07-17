#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n=4, i, j;
    char c[4][4];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> c[i][j];
        }
    }
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
            ll a=0, b=0;
            if(c[i][j]=='#'){
                a++;
            }
            else{
                b++;
            }
            if(c[i+1][j]=='#'){
                a++;
            }
            else{
                b++;
            }
            if(c[i][j+1]=='#'){
                a++;
            }
            else{
                b++;
            }
            if(c[i+1][j+1]=='#'){
                a++;
            }
            else{
                b++;
            }
            if(a>=3 || b>=3){
                cout << "YES" << endl;
                cerr << a << " " << b << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
//    if(x){
//        cout << "YES" << endl;
//    }
//    else{
//        cout << "NO" << endl;
//    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while(t--)
    {
        solve();

    }
    return 0;
}
