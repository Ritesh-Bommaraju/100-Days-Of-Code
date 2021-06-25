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

int p[N] = {};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        p[temp] = i + 1;
    }
    ll vasya = 0;
    ll petya = 0;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int q;
        cin >> q;
        vasya += p[q];
        petya += n - p[q] + 1;
    }
    cout << vasya << " " << petya << endl;
}




