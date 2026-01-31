#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for(long long i = 0;i<n;i++){
            cin >> a[i];
        }
        vector<long long> b(n);
        for(long long i = 0;i<n;i++){
            cin >> b[i];
        }

        vector<long long> longest_a(2*n + 1,0);
        vector<long long> longest_b(2*n + 1,0);
        long long cnt = 1;

        for(int i = 1;i<n;i++){
            if(a[i] == a[i-1]){
                cnt++;
            }else{
                longest_a[a[i-1]] = max(longest_a[a[i-1]],cnt);
                cnt = 1;
            }
        }
        longest_a[a[n-1]] = max(longest_a[a[n-1]],cnt);

        cnt = 1;
        for(int i = 1;i<n;i++){
            if(b[i] == b[i-1]){
                cnt++;
            }else{
                longest_b[b[i-1]] = max(longest_b[b[i-1]],cnt);
                cnt = 1;
            }
        }
        longest_b[b[n-1]] = max(longest_b[b[n-1]],cnt);

        long long ans = -1;
        for(int i = 1;i<=2*n;i++){
            ans = max(ans,longest_a[i]+longest_b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
