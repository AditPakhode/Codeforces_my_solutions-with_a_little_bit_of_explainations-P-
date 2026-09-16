#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int arr[7];
        int max=-100;
        int idx=-1;
        for(int i=0;i<7;i++){
            cin >> arr[i];
            if(max < arr[i]){
                max=arr[i];
                idx=i;
            }
        }
        int sum=0;
        for(int i=0;i<7;i++){
            if(i!=idx){
                sum+=arr[i];
            }
        } 
        sum*=(-1);
        cout << sum+max << '\n';   
    }
    return 0;
}