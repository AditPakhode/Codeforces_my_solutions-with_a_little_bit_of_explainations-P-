#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        cin >> n;
        int count = n / 15;
        count*=3;

        int rem = n % 15;
        for(int i=0;i<=rem;i++){
            if(i % 3 == i % 5) count++;
        }
        cout << count << "\n";
    }
    return 0;
}