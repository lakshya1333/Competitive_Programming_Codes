#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        bool ok = true;

        for (int start = 1; start <= n; start += 2) {

            vector<int> id, val;

            for (int x = start; x <= n; x *= 2) {
                id.push_back(x);
                val.push_back(a[x]);
            }

            sort(id.begin(), id.end());
            sort(val.begin(), val.end());

            if (id != val) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
