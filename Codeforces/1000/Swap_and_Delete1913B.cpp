#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        if(n == 1){
            cout<<1<<endl;
        }else{
            int zero = 0;
            int ones = 0;
            for(int i = 0;i<n;i++){
                if(s[i] == '0'){
                    zero++;
                }else{
                    ones++;
                }
            }
            int len = 0;
            for(int i = 0;i<n;i++){
                if(s[i] == '0' && ones > 0){
                        ones--;
                        len++;
                }
                else if(s[i] == '1' && zero > 0){
                        zero--;
                        len++;
                }else{
                    break;
                }
            }
            int paisa = n - len;
            cout<<paisa<<endl;
        }
    }
    return 0;
}
