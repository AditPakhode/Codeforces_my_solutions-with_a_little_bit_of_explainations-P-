#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        cin >> n;
        long long a[n], b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            if((a[i] - b[i]) > 0){
                sum+=a[i];
                a[i]=b[i];
            }
            else{
                sum+=b[i];
            }
        }
        long long m=0;
        for(int i=0;i<n;i++){
            if(m < a[i]){
                m=a[i];
            }
        }
        cout << sum+m << '\n';
    }
    return 0;
}