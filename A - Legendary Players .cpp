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
    string s;
    cin >> s;
    map<string, ll> mp;
    mp["tourist"]= 3858;
    mp["ksun48"]= 3679;
    mp["Benq"]= 3658;
    mp["Um_nik"]= 3648;
    mp["apiad"]= 3638;
    mp["Stonefeang"]= 3630;
    mp["ecnerwala"] =3613;
    mp["mnbvmar"] =3555;
    mp["newbiedmy"]= 3516;
    mp["semiexp"]= 3481;
    cout << mp[s] << endl;
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

