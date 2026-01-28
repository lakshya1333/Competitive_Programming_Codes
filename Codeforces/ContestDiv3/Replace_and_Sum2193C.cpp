#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    if (!(cin >> n >> q)) return;

    vector<long long> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<long long> v(n + 2, 0);
    for (int i = n; i >= 1; i--) {
        v[i] = max({a[i], b[i], v[i + 1]});
    }

    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }

    vector<long long> results;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        results.push_back(pref[r] - pref[l - 1]);
    }

    for (int i = 0; i < q; i++) {
        cout << results[i] << (i == q - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}