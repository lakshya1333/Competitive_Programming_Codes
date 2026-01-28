#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n >> p;
        vector<int> a(n);
        vector<pair<long long,long long>> conn(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0;i<n;i++){
            cin >> b[i];
        }
        for(int i = 0;i<n;i++){
            conn[i] = {b[i],a[i]};
        }
        sort(conn.begin(),conn.end());
        long long minn = p;
        long long share = 1;

        for(auto it : conn){
            long long share_vill = it.second;
            long long cost = it.first;
            if(cost >= p){
                break;
            }
            if(share + share_vill > n){
                minn += (n - share)*cost;
                share = n;
                break;
            }else{
                minn += share_vill*cost;
                share += share_vill;
            }
        }
        minn += (n - share)*p;
        cout<<minn<<endl;
    }
    return 0;
}
