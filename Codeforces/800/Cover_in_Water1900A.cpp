#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        int cnt = 0;
        for(int i = 0 ;i<n;i++){
            if(s[i] == '.'){
                cnt++;
            }else{
                if(cnt >= 3){
                    ans = 2;
                    break;
                }else{
                    ans += cnt;
                    cnt = 0;
                }
            }
        }
        if(cnt >= 0){
            if(cnt >= 3) ans = 2;
            else ans += cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}