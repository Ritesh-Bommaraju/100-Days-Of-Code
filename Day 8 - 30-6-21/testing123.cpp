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
	ll n;
	cin >> n;
	vector<pair<int, bool>> v;
	ll x; ll y;
	while (n--) {
		cin >> x; cin >> y;
		v.push_back(make_pair(x, true));
		v.push_back(make_pair(y, false));
	}
	sort(v.begin(), v.end());
	ll ans = 0; ll maxx = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].second == true) {
			ans++;
			maxx = max(ans, maxx);
		} else {
			ans--;
		}
	}
	cout << maxx << endl;
}
