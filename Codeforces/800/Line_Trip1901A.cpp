#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;
        vector<long long> pts;
        pts.push_back(0);
        for(int i = 0;i<n;i++){
            long long point;
            cin >> point;
            pts.push_back(point);
        }
        pts.push_back(x);
        n = pts.size();
        long long maxx = INT_MIN;
        for(int i = 1;i<n;i++){
            if(i == n - 1){
                maxx = max(maxx,2*(pts[i] - pts[i-1]));
            }else{
                maxx = max(maxx,pts[i] - pts[i-1]);
            }
        }
        cout << maxx << endl;
    }
    return 0;
}
