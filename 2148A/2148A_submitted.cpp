#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        int rem = n % 4;
        if(rem==0 || rem == 2) cout << 0 << '\n';
        else if(rem == 1) cout << x << '\n';
        else cout << (-1)*x << '\n';
    }
    return 0;
}