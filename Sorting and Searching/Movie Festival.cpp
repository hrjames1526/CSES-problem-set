// https://cses.fi/problemset/task/1629/
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
	int n; cin >> n;
	vector<pair<int, int>> a;
	for (int i = 0; i < n; ++i) {
		int x, y; cin >> x >> y;
		a.push_back({y, x});
	}
	sort(a.begin(),  a.end());
	int ending = -1;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i].second >= ending) {
			++count;
			ending = a[i].first;
		}
	}
	cout << count;
}
