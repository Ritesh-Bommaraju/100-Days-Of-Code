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
#define yes cout << "YES" << '\n'3
#define endl  "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    ll v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (q--)
    {
        ll c;
        cin >> c;
        if (c == 1)
        {
            ll l, r, x;
            cin >> l >> r >> x;
            for (int i = l - 1; i < r; i++)
            {
                v[i] = v[i] + (x + i + 1 - l) * (x + i + 1 - l);
            }
        }
        else
        {
            ll y; cin >> y;
            cout << v[y - 1] << endl;
        }
    }
    return 0;
}
