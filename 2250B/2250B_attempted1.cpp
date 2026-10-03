#include <bits/stdc++.h>

using namespace std;
void insert_kpairs(string &s, int i, int k){
    for(int c=0;c<k;c++){
        s[i+c]='1';
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k == n-1){
            cout << -1 << '\n';
            continue;
        }
        string s;
        s.reserve(n);
        int turn=0;
        for(int i=0;i<n;i++){
            if(i>0){
                insert_kpairs(s, i, k);
                turn = 1;
                continue;
            }
            if(turn == 0){
                s[i]='0';
                turn = 1;
            }
            if(turn == 1){
                s[i]='1';
                turn = 0;
            }
        }
        cout << s << '\n';
    }
    return 0;
}