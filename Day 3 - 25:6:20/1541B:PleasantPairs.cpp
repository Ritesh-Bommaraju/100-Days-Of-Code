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
const int N = int(1e6);
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define endl  "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, flag = 0; cin >> n;
        int v1[n];
        ll max = 2 * n;
        int v2[max + 1];
        for (int x = 0; x <= max; x++) {
            v2[x] = N;
        }
        for (int x = 0; x < n; x++)
        {
            cin >> v1[x];
            v2[v1[x]] = x + 1;
        }
        for (int x = 3; x < max; x++)
        {
            for (int y = 1; y <= sqrt(x); y++)
            {
                if (x % y == 0 and x != y * y)
                {
                    if (v2[y] + v2[x / y] == x)
                    {
                        flag += 1;
                    }
                }
            }
        }
        cout << flag;
        cout << endl;
    }
    return 0;
}