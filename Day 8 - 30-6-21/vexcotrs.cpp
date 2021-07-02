#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) {
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	vector < vector<int> > v;
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		v.push_back(vector<int> ());// or make a temp vector here
		for (int j = 0; j < n; ++j)
		{
			int x;
			cin >> x;
			v[i].push_back(x);// push back x to the temp vector
		}
		// here now do v.push_back(temp);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		printVec(v[i]);
	}
	cout << v[1][1] << endl;

}
