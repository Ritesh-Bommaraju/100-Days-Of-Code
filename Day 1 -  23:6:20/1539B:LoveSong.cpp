#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define mll map<ll , ll >
#define pll pair<ll , ll>
#define vpll vector<pll>
#define EB emplace_back
#define F first
#define S second
const int N = int(1e5 + 3);
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define endl  "\n"

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	ll a[n + 1];
	a[0] = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		a[i] = a[i - 1] + (s[i - 1] - 'a' + 1);
	}
	while (q--) {
		ll l, r;
		cin >> l >> r;
		cout << abs(a[l - 1] - a[r]) << endl;
	}
	return 0;
}

