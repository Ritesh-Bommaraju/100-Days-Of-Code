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
        ll n, x, t;
        cin >> n >> x >> t;
        ll z;
        z = t / x;
        ll diss = 0;
        if (n < z) {
            diss = (n - 1) * (n) / 2;
        }
        else {
            diss = (n * z) - (z * (z + 1)) / 2;
        }
        cout << diss << endl;
    }
    return 0;
}
