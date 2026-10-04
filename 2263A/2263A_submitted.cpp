#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int one=0, zero=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==1) one++;
            else zero++;
        }
        if(one >= zero){
            cout << "Bessie";
        }
        else{
            cout << "Elsie";
        }
        cout << '\n';
    }
    return 0;
}