#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        string ds = s;
        ds += s;
        int idx = -1;
        for(int i = 0;i<n;i++){
            if(s[i] == 'g'){
                idx = i;
                break;
            }
        }
        int ans = INT_MIN;
        for(int i = 2*n - 1;i>=0;i--){
            if(ds[i] == 'g'){
                idx = i;
            }
            if(ds[i] == c){
                ans = max(ans,idx-i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}