#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- >0){
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int count_neg=0, count_zero;
        for(int i:arr){
            if(i==0) count_neg+=1;
            if(i ==-1) count_zero+=1;
        }
        cout << ((count_neg%2)*2 + count_zero) << '\n';
    }

    return 0;
}