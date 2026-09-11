#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int a, b;
        cin >> a >> b;
        if(a % b == 0) cout << 0 << '\n';
        else cout << (b - (a % b)) << '\n';
    }
    return 0;
}