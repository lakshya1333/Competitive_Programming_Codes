#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<long long> second;
        long long first_min = INT_MAX;
        for(int i = 0;i<n;i++){
            long long m;
            cin >> m;
            vector<long long> arr(m);
            for(auto &x : arr){
                cin >> x;
            }
            sort(arr.begin(),arr.end());
            second.push_back(arr[1]);
            first_min = min(first_min,arr[0]);
        }
        sort(second.begin(),second.end());
        long long sum_second = accumulate(second.begin(),second.end(),0LL);
        long long lowest_sec_min = second[0];
        long long ans = first_min + sum_second - lowest_sec_min;
        cout << ans << endl;
    }
    return 0;
}