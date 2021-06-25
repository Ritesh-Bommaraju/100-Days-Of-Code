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
    ll countx = 0;
    ll county = 0;
    ll countz = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        countx += x;
        county += y;
        countz += z;
    }
    if (countx == 0 && county == 0 && countz == 0)
    {
        yes;
    }
    else {
        no;
    }
    return 0;
}