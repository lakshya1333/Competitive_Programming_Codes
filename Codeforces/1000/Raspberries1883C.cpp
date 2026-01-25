#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        int k;
        cin >> n >> k;
        vector<int> arr(n);
        int even = 0;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            if(arr[i] % 2 == 0){
                even++;
            }
        }
        if(k == 4){
            int can = 0;
            if(even >= 2){
                can = 0;
            }else if(even == 1){
                can = 1;
            }else{
                can = 2;
            }
            int ans = INT_MAX;
            for(int i = 0;i<n;i++){
                int a = (k - arr[i] % k) % k;
                ans = min(ans,a);
            }
            ans = min(ans,can);
            cout<<ans<<endl;
        }else{
            int ans = INT_MAX;
            for(int i = 0;i<n;i++){
                int a = (k - arr[i] % k) % k;
                ans = min(ans,a);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}