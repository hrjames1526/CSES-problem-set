// https://cses.fi/problemset/task/1145
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n), d;
	for (int i = 0; i < n; ++i) cin >> a[i];
	d.push_back(a[0]);
	for (int i = 1; i < n; ++i) {
		if (d.back() < a[i]) d.push_back(a[i]);
		else {
			int j = lower_bound(d.begin(), d.end(), a[i]) - d.begin();
			d[j] = a[i];
 
		}
	}
	cout << d.size();
}
