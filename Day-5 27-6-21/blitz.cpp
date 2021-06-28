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
    ll t;
    cin >> t;
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        ll total = 2 * (180 + n);
        ll time_left = a + b;
        ll duration = total - time_left;
        cout << duration << endl;
    }
    return 0;
}
