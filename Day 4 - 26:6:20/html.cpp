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
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string res = "Success";
        if (s.size() <= 3)
        {
            res = "Error";
        }
        else if (s[0] != '<' or s[1] != '/') {
            res = "Error";

        }
        else if (s[s.size() - 1] != '>') {
            res = "Error";
        }
        else {
            for (int i = 2; i < s.size() - 1; ++i)
            {
                if (!((s[i] >= 'a' and s[i] <= 'z') or s[i] >= '0' and s[i] <= '9'))
                {
                    res = "Error";
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}




