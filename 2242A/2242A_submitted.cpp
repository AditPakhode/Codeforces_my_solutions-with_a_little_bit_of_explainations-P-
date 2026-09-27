#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int k;
        cin >> k;
        int arr[k];
        int count = 0;
        int mx = -1;
        for(int i=0;i<k;i++){
            cin >> arr[i];
            if(arr[i] >= 2){
                count++;
                mx=max(arr[i], mx);
            }
        }
        if(count >= 2 || mx >= 3) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}