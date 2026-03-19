#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<long long> shoe(n);

        for(int i = 0 ;i<n;i++){
            cin >> shoe[i];
        }

        map<long long,long long> mpp;
        for(int i = 0;i<n;i++){
            mpp[shoe[i]]++;
        }
        long long flag = 0;
        for(auto i : mpp){
            if(i.second == 1){
                flag = 1;
            }
        }
        if(flag == 1){
            cout << -1 << endl;
            continue;
        }
        vector<long long> stud(n);
        for(int i = 0;i<n;i++){
            stud[i] = i+1;
        }
        long long l = 0,r=0;
        while(r < n){
            if(shoe[l] == shoe[r]){
                r++;
            }else{
                rotate(stud.begin() + l,stud.begin() + l + 1,stud.begin()+r);
                l = r;
            }
        }
        rotate(stud.begin() + l,stud.begin() + l + 1,stud.begin()+r);
        for(int i = 0;i<n;i++){
            cout << stud[i] << " ";
        }
        cout << endl;
    }
}