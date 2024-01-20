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
    string s1, s2;
	cin >> s1 >> s2;
	ll cs1 = 0;
	ll cs2 = 0;
	ll c = 0;
	ll n = s1.size();
	for(int i=0; i<n; i++)
	{
		if(s1[i] == '+')
		{
			cs1++;
		}
		if(s2[i] == '+')
		{
			cs2++;
		}
		if(s2[i] == '?')
		{
			c++;
		}
	}
	ll  counter = 0;
	for(int i=0; i< (1<<c); i++)
	{
		if(__builtin_popcount(i) + cs2 == cs1)
		{
			counter++;
		}
	}

	cout<<fixed<<setprecision(9)<<(double)counter/(1<<c)<<endl;
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

