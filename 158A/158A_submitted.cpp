#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    int kth_val;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i==k-1){
            kth_val=arr[i];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i] >= kth_val && arr[i]>0) ans++;
    }
    cout << ans;
    return 0;
}