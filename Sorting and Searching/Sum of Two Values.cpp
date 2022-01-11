// https://cses.fi/problemset/task/1640
#include<bits/stdc++.h>
using namespace std;
struct ds {
    int fi, se;
    bool operator<(const ds& a) {return (fi < a.fi);}
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<ds> a;
    for (int i = 0; i < n; ++i) {
        int temp; cin >> temp;
        a.push_back({temp, i + 1});
    }
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (i < n && j > -1 && i < j) {
        if (a[i].fi + a[j].fi == k) {
            pair p = minmax(a[i].se, a[j].se);
            cout << p.first << " " << p.second;
            return 0;
        }
        if (a[i].fi + a[j].fi > k) --j;
        else ++i;
    }
    cout << "IMPOSSIBLE";
}
