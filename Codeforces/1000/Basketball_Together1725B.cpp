#include <bits/stdc++.h>
using namespace std;

int main(){
        int N;
        int D;
        cin >> N >> D;
        vector<int> powers(N);

        for(int i = 0;i<N;i++){
            cin >> powers[i];
        }

        sort(powers.begin(),powers.end());
        
        int left = -1;
        int right = N-1;
        int team_size = 1;
        int teams = 0;
        while(left < right){
            if(powers[right]*team_size <= D && left < right){
                left++;
                team_size++;
            }else{
                teams++;
                right--;
                team_size = 1;
            }
        } 
        cout << teams << endl;
        return 0;
}