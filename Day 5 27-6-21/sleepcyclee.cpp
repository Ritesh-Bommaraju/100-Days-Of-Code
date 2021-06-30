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
        ll l, h, count = 0, flag = 0;
        cin >> l >> h;
        string s;
        cin >> s;
        ll temp = h;
        for (int i = 0; i < l; i++) {
            if (s[i] == '0') {
                count++;
            }
            else {
                if (count == temp or count == h) {
                    flag = 1;
                    break;
                }
                if (2 * (h - count) < h) {
                    h = 2 * (h - count);
                }
                count = 0;
            }
        }
        if (flag == 1 or count == temp or count == h) {
            yes;
        }
        else {
            h = 2 * (h - count);
            if (h <= 0) {
                yes;
            }
            else {
                no;
            }
        }
    }
    return 0;
}
