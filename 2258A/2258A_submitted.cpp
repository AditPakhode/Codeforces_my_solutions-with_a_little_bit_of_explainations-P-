#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int cap = min(arr[0], arr[n-1]);
        if(arr[0]%cap == 0 && arr[n-1]%cap == 0){
            cout << cap << '\n';
            continue;
        }
        int ans = 0;
        for(int i=1;i*i<=cap;i++){
            if(arr[0]%i == 0 && arr[n-1]%i == 0){
                ans = max(ans,i);
            }
            if(cap%i == 0){
                if(arr[0]%(cap/i) == 0 && arr[n-1]%(cap/i) == 0){
                    ans = max(ans,(cap/i));
                }
                
            }
        }
        cout << ans << '\n';
    }
    return 0;
}