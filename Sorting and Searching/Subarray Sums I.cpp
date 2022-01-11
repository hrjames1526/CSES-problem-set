// https://cses.fi/problemset/task/1660/
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int i = 0, j = 0, count = 0;
	long long sum = 0;
	while (i < n && j < n) {
		while (sum < k && i <= n && j <= n) sum += a[j++];
		while (sum > k && i <= n && j <= n) sum -= a[i++];
		if (sum == k) {
			++count;
			sum -= a[i++];
		}
	}
	cout << count;
}
