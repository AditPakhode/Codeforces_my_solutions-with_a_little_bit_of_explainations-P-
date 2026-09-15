#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n, m;
        cin >> n >> m;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        int count=0;
        int max=0;
        for(int i=1;i<=m;i++){
            for(int a:arr){
                if(i > a){
                    continue;
                }
                else{
                    count+=1;
                    if(a-i == i) count++;
                }
            }
            if(count >= max) max = count;
            count = 0;
        }
        cout << max << '\n';
    }
    return 0;
}