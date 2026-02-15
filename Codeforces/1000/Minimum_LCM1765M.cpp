#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long ans_a = 1;
        long long ans_b = n - 1;
        for(long long fact = 2;fact*fact <= n;fact++){
            if(n % fact == 0){
                ans_a = n / fact;
                ans_b = n - ans_a;
                break;
            }
        }

        cout << ans_a << " " << ans_b << endl;
    }
    return 0;
}