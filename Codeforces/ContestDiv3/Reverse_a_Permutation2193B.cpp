#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> sufMax(n), sufPos(n);

        sufMax[n - 1] = arr[n - 1];
        sufPos[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= sufMax[i + 1]) {
                sufMax[i] = arr[i];
                sufPos[i] = i;
            } else {
                sufMax[i] = sufMax[i + 1];
                sufPos[i] = sufPos[i + 1];
            }
        }

        bool done = false;

        for (int i = 0; i < n; i++) {
            if (arr[i] < sufMax[i]) {
                int l = i;
                int r = sufPos[i];
                reverse(arr.begin() + l, arr.begin() + r + 1);
                done = true;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}