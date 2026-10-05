#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int mini=10;
        cin >> n;
        for(int i=0;i<3;i++){
            int a;
            cin >> a;
            if(mini > a) mini = a;
        }
        cout << n-mini << '\n';
    }
    return 0;
}