#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int s;
        int x;
        cin >> n >> s >> x;
        vector<int> arr(n);
        int sum = 0;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        int diff = s - sum;
        if(sum > s){
            cout << "No" << endl;
        }
        else if(diff % x == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}